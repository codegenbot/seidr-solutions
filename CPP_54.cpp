#include <iostream>
#include <algorithm>
#include <string>

bool same_chars(std::string s0, std::string s1) {
    std::sort(s0.begin(), s0.end());
    std::sort(s1.begin(), s1.end());
    return s0 == s1;
}

int main() {
    std::string str1, str2;
    std::cout << "Enter the first string: ";
    std::cin >> str1;
    std::cout << "Enter the second string: ";
    std::cin >> str2;

    if (same_chars(str1, str2)) {
        std::cout << "Both strings have the same characters." << std::endl;
    } else {
        std::cout << "Strings have different characters." << std::endl;
    }

    return 0;
}