```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> bf(const std::string& s1, const std::string& s2) {
    std::vector<std::string> result;
    if (s1.length() > s2.length()) {
        for (int i = 0; i <= s2.length(); i++) {
            result.push_back(s1.substr(0, i+1));
        }
    } else {
        for (int i = 0; i <= s1.length(); i++) {
            result.push_back(s2.substr(0, i+1));
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return a.size() == 0 ? b.size() == 0 : false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));  
}