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
    std::cout << std::boolalpha; // To display bools as true/false
    std::cout << is_nested("[]") << std::endl; // Should output: false
    std::cout << is_nested("[[]]") << std::endl; // Should output: true
    std::cout << is_nested("[[[]]]") << std::endl; // Should output: true
    return 0;
}