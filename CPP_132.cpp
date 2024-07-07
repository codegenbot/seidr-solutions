```cpp
#include <iostream>
#include <string>

bool is_nested(std::string str) {
    int count = 0;
    bool isOpeningBracket = false;
    for (char& c : str) {
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
    char str[1000];
    std::cout << "Enter a string: ";
    cin.getline(str, 999);
    if (is_nested(std::string(str))) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }
    return 0;
}