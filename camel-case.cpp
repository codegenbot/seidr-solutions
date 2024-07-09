```cpp
#include <vector>
#include <iostream>
#include <string>
#include <limits>
#include <cctype>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            if (capitalize) {
                result += toupper(c);
                capitalize = false;
            } else {
                result += ' ';
                capitalize = true;
            }
        } else {
            result += (capitalize ? toupper(c) : tolower(c));
            capitalize = !capitalize;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << kebabToCamel(input) << std::endl;

    return 0;
}