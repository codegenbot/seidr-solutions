#include <string>
#include <unordered_set>
#include <iostream>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::unordered_set<char> set0(s0.begin(), s0.end());
    for (char c : s1) {
        if (set0.find(c) == set0.end()) {
            return false;
        }
    }
    return set0.size() == s1.size();
}

int main() {
    std::string s0, s1;
    std::cin >> s0 >> s1;
    
    if (same_chars(s0, s1)) {
        std::cout << "Same characters" << std::endl;
    } else {
        std::cout << "Different characters" << std::endl;
    }
    
    return 0;
}