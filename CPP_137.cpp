#include <iostream>
#include <string>
#include <cctype>
#include <boost/any.hpp>

int compare_strings(const std::string& a, const std::string& b) {
    for (size_t i = 0; i < a.size() && i < b.size(); ++i) {
        if (std::tolower(a[i]) > std::tolower(b[i]))
            return 1;
        else if (std::tolower(a[i]) < std::tolower(b[i]))
            return -1;
    }
    if (a.size() > b.size())
        return 1;
    else if (a.size() < b.size())
        return -1;
    return 0;
}

int main() {
    std::string str1, str2;
    std::cout << "Enter the first string: ";
    std::cin >> str1;
    std::cout << "Enter the second string: ";
    std::cin >> str2;
    
    int result = compare_strings(str1, str2);
    
    if (result > 0)
        std::cout << "The first string is greater." << std::endl;
    else if (result < 0)
        std::cout << "The second string is greater." << std::endl;
    else
        std::cout << "Both strings are equal." << std::endl;
    
    return 0;
}