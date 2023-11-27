#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) {
        return result;
    }
    string letter;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            letter += test[i];
        } else {
            result[letter]++;
            letter = "";
        }
    }
    result[letter]++;
    return result;
}

bool issame(map<char, int> a, map<char, int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (const auto& pair : a) {
        if (b[pair.first] != pair.second) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    assert(issame(histogram("a a"), {{'a', 2}}));
    assert(issame(histogram("hello world"), {{'h', 1}, {'e', 1}, {'l', 3}, {'o', 2}, {'w', 1}, {'r', 1}, {'d', 1}}));
    assert(issame(histogram(""), {}));
    
    return 0;
}