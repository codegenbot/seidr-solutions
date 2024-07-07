```cpp
#include <iostream>
#include <string>

bool is_nested(std::string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']') {
            if (count > 0) {
                count--;
            } else {
                return false; // Not balanced
            }
        }
    }
    return count > 0; // Still has an open bracket, so it's not nested
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    getline(std::cin, str);
    if (is_nested(str)) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }
    return 0;
}