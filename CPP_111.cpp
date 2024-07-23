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

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    if (a.size() != b.size()) return false;
    for (auto p : a) {
        auto q = b.find(p.first);
        if (q == b.end() || p.second != q->second) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}