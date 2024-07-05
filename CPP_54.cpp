#include <string>
#include <unordered_set>
#include <iostream>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::unordered_set<char> set0(s0.begin(), s0.end());
    std::unordered_set<char> set1(s1.begin(), s1.end());
    return set0 == set1;
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