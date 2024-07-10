#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> all_prefixes(std::string s) {
    std::vector<std::string> prefixes;
    for (int i = 0; i <= s.size(); ++i) {
        prefixes.push_back(s.substr(0, i));
    }
    return prefixes;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<std::string> b = {"W", "W", "W"};
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
}