```cpp
#include <iostream>
#include <string>

bool is_nested(const std::string str) {
    bool result = false;
    int level = 0;

    for (auto c : str) {
        if (c == '(') {
            level++;
        } else if (c == ')') {
            if (level > 0) {
                level--;
            }
        }
    }

    return level != 0; 
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    getline(std::cin, input);
    if (is_nested(input)) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }
    return 0;
}