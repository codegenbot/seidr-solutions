#include <iostream>
#include <string>
#include <map>
#include <cassert>

using namespace std;

bool issame(map<char, int> a, map<char, int> b) {
    if (a.size() != b.size()) return false;
    for (const auto& pair : a) {
        if (b.find(pair.first) == b.end() || b.at(pair.first) != pair.second) return false;
    }
    return true;

}

map<char, int> histogram(const string& str) {
    map<char, int> result;

    for (char c : str) {
        if (!isalpha(c)) continue; 
        char lower = tolower(c);
        if (result.find(lower) == result.end()) {
            result[lower] = 1;
        } else {
            result[lower]++;
        }
    }

    return result;

}

int main() {
    assert(issame(histogram("a"), map<char, int>{{'a', 1}}));
    cout << "Success!" << endl;
    return 0;
}