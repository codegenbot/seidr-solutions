```cpp
#include <iostream>
#include <map>
#include <string>

std::map<char, int> histogram(std::string s) {
    std::map<char, int> res;
    for (char c : s) {
        if (res.find(c) == res.end()) {
            res[c] = 1;
        } else {
            res[c]++;
        }
    }
    return res;
}

bool issame(std::map<char, int> a, std::map<char, int> b) {
    for (auto p : a) {
        if (b.find(p.first) == b.end() || p.second != b[p.first]) {
            return false;
        }
    }
    for (auto p : b) {
        if (a.find(p.first) == a.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}