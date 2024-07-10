#include <iostream>
#include <algorithm>
#include <string>

bool same_chars(std::string s0, std::string s1) {
    std::sort(s0.begin(), s0.end());
    std::sort(s1.begin(), s1.end());
    return s0 == s1;
}

int main() {
    std::string input1, input2;
    std::cout << "Enter first string: ";
    std::cin >> input1;
    std::cout << "Enter second string: ";
    std::cin >> input2;

    if (same_chars(input1, input2)) {
        std::cout << "Both strings have the same characters." << std::endl;
    } else {
        std::cout << "Strings do not have the same characters." << std::endl;
    }

    return 0;
}