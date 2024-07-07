```cpp
#include <iostream>
#include <string>

bool is_nested(std::string str) {
    int count = 0;
    bool isOpeningBracket = false;
    for (char c : str) {
        if (c == '[') {
            if (!isOpeningBracket) {
                count++;
                isOpeningBracket = true;
            }
        } else if (c == ']') {
            if (count > 0) {
                count--;
            } else {
                std::cout << "Error: Unmatched closing bracket." << std::endl;
                return false;
            }
            isOpeningBracket = false;
        }
    }
    if (count > 0) {
        std::cout << "Warning: Unclosed brackets." << std::endl;
    }
    return count == 0;
}

int main
{
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    if (is_nested(str)) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }
    return 0;
}