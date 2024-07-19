#include <boost/any.hpp>
#include <iostream>
#include <string>

int compare_one(const std::string& str, int val) {
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] > val)
            return 1;
        else if (str[i] < val)
            return -1;
    }
    return 0;
}

int compare_strings(const std::string& a, const std::string& b) {
    for (size_t i = 0; i < a.size() && i < b.size(); ++i) {
        if (a[i] > b[i])
            return 1;
        else if (a[i] < b[i])
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
    int val;
    std::cout << "Enter the first string: ";
    std::cin >> str1;
    std::cout << "Enter the value to compare with: ";
    std::cin >> val;
    
    int result = compare_one(str1, val);
    
    if (result > 0)
        std::cout << "The string is greater." << std::endl;
    else if (result < 0)
        std::cout << "The string is smaller." << std::endl;
    else
        std::cout << "The string is equal." << std::endl;
    
    return 0;
}