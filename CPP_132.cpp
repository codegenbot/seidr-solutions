#include <string>
#include <iostream>

bool is_nested(const std::string& str) {
    int depth = 0;
    bool nested = false;
    for (char c : str) {
        if (c == '[') {
            depth++;
            if (depth > 1) nested = true;
        } else if (c == ']') {
            if (depth > 0) depth--;
        }
    }
    return nested;
}

int main() {
    std::cout << std::boolalpha;
    std::string input;
    std::getline(std::cin, input);
    std::cout << is_nested(input) << std::endl;
    return 0;
}