#include <iostream>
#include <string>
#include <cassert>

bool same_chars(std::string s0, std::string s1){
    std::sort(s0.begin(), s0.end());
    std::sort(s1.begin(), s1.end());
    return s0 == s1;
}

int main() {
    std::string s0, s1;
    std::cout << "Enter the first string: ";
    std::cin >> s0;
    std::cout << "Enter the second string: ";
    std::cin >> s1;
    bool result = same_chars(s0, s1);
    std::cout << std::boolalpha << "Are the characters in both strings the same? " << result << std::endl;
    return 0;
}