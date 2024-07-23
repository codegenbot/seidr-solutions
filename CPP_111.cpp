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
    if (a.size() != b.size())
        return false;

    for (auto& pair : a) {
        if (b.find(pair.first) == b.end() || pair.second != b[pair.first])
            return false;
    }
    return true;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}