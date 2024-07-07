```cpp
#include <iostream>
#include <string>

bool is_nested(const char* str) {
    int count = 0;
    bool isOpeningBracket = false;
    for (auto c : std::string(str)) {
        if (c == '[') {
            if (!isOpeningBracket) {
                count++;
                isOpeningBracket = true;
            }
        } else if (c == ']') {
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
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    if (is_nested(str.c_str())) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }
    return 0;
}