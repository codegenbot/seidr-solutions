```c++
#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ') {  // Check if c is not a space
            if (capitalize) {
                result += toupper(c);
                capitalize = false;
            } else {
                result += tolower(c);
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << kebabToCamel(input) << std::endl;

    return 0;
}