#include <map>
#include <string>

map<char, int> histogram(string test) {
    map<char, int> result;
    for (char c : test) {
        if (c != ' ') {
            result[c]++;
        }
    }
    return result;
}

bool issame(map<char,int> a,map<char,int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (auto& kvp : a) {
        if (b.find(kvp.first) == b.end() || b[kvp.first] != kvp.second) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));

    // Add more test cases here...

    return 0;
}