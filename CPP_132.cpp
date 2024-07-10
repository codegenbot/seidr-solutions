#include <iostream>
#include <string>
#include <cassert>

bool is_nested(std::string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']' && count > 0) {
            count--;
        }
    }
    return count == 0;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    bool result = is_nested(input);
    std::cout << "Is the string nested: " << (result ? "true" : "false") << std::endl;

    return 0;
}