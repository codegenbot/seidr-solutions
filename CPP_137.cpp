```cpp
#include <iostream>
#include <string>

int compare_strings(std::string a, std::string b) {
    if (a > b)
        return 1;
    else if (b > a)
        return -1;
    else
        return 0;
}

int main() {
    std::string str1, str2;
    std::cout << "Enter first string: ";
    std::getline(std::cin, str1);

    std::cout << "Enter second string: ";
    std::getline(std::cin, str2);

    int result = compare_strings(str1, str2);

    if (result > 0)
        std::cout << "Greater string is: " << str1 << std::endl;
    else if (result < 0)
        std::cout << "Greater string is: " << str2 << std::endl;
    else
        std::cout << "Both strings are equal" << std::endl;

    return 0;
}