```cpp
#include <iostream>
#include <string>

bool is_nested(const std::string str);

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    if (is_nested(input)) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }
    return 0;
}

bool is_nested(const std::string str) {
    bool result = false;
    int level = 0;

    for (auto i = str.begin(); i != str.end(); ++i) { 
        if (*i == '(') {
            level++;
        } else if (*i == ')') {
            if (level > 0) {
                level--;
            }
        }
    }

    return level != 0; 
}