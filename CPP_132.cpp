```cpp
#include <iostream>
#include <string>

bool is_nested(const std::string& str) {
    size_t count = 0;
    bool isOpeningBracket = false;
    for (auto it = str.begin(); it != str.end(); ++it) {
        if (*it == '[') {
            if (!isOpeningBracket) {
                count++;
                isOpeningBracket = true;
            }
        } else if (*it == ']') {
            if (count > 0) {
                count--;
            } else {
                return false;
            }
            isOpeningBracket = false;
        }
    }
    return count > 0;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    if (is_nested(input)) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }
}