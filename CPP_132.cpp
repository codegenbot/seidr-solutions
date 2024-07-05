#include <iostream>
#include <string>

bool is_nested(std::string str) {
    int open_brackets = 0;
    bool nested = false;

    for (char c : str) {
        if (c == '[') {
            open_brackets++;
            if (open_brackets > 1) {
                nested = true;
            }
        } else if (c == ']') {
            open_brackets--;
        }
    }

    return nested;
}

int main() {
    std::cout << std::boolalpha; // To print boolean as true/false
    std::cout << is_nested("[]") << std::endl;           // false
    std::cout << is_nested("[[]]") << std::endl;         // true
    std::cout << is_nested("[][]") << std::endl;         // false
    std::cout << is_nested("[[[]]]") << std::endl;       // true
    std::cout << is_nested("]") << std::endl;            // false
}