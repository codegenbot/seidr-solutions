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
    char input[256];
    std::cout << "Enter a string: ";
    std::cin.get(input, sizeof(input));
    input[sizeof(input) - 1] = '\0';
    std::string str = input;
    if (is_nested(str)) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }
    return 0;
}