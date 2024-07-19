#include <iostream>
#include <string>

int compare_strings(const std::string& a, const std::string& b) {
    if (a > b)
        return 1;
    else if (b > a)
        return -1;
    else
        return 0;
}

int main() {
    std::string str1, str2;
    std::cout << "Enter the first string: ";
    std::cin >> str1;
    std::cout << "Enter the second string: ";
    std::cin >> str2;
    
    int result = compare_strings(str1, str2);
    
    if (result > 0) {
        std::cout << "The first string is greater." << std::endl;
    } else if (result < 0) {
        std::cout << "The second string is greater." << std::endl;
    } else {
        std::cout << "Both strings are equal." << std::endl;
    }
    
    return 0;
}