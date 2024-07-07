```cpp
#include <iostream>
#include <string>

bool is_nested(const std::string& str) {
    int count = 0;
    bool isOpeningBracket = false;
    for (size_t i = 0; i < str.size(); i++) {
        if (str[i] == '[') {
            if (!isOpeningBracket) {
                count++;
                isOpeningBracket = true;
            }
        } else if (str[i] == ']') {
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
    std::getline(std::cin >> std::ws, input);
    if (is_nested(input)) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }
}