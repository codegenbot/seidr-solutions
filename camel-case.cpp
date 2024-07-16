```cpp
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalizeNext = str.empty(); // Initial state

    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else {
            result += capitalizeNext ? topper(c) : tolower(c);
            capitalizeNext = false;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}