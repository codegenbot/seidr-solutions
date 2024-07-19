#include <iostream>
#include <string>
#include <cassert>

bool is_nested(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']') {
            if (count > 0) {
                count--;
            }
        }
    }
    return count == 0;
}

bool valid_nested_brackets(const std::string& str) {
    return is_nested(str);
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << (valid_nested_brackets(input) ? "The brackets are nested correctly" : "The brackets are not nested correctly") << std::endl;

    return 0;
}