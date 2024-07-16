#include <iostream>
#include <string>

bool is_nested(const std::string& str) {
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

    if (is_nested(input)) {
        std::cout << "String is nested properly." << std::endl;
    } else {
        std::cout << "String is not nested properly." << std::endl;
    }

    return 0;
}