```cpp
#include <string>
#include <iostream>

bool is_nested(std::string str) {
    int count = 0;
    std::string output = "";
    for (char c : str) {
        if (c == '[') {
            output += '[';
            count++;
        } else if (c == ']') {
            if (count > 0) {
                output += ']';
                count--;
            } else {
                return false;
            }
        } else {
            output += c;
        }
    }
    return count > 0;
}

int main() {
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