```cpp
#include <iostream>
#include <string>

std::string camelCase(std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            while (str.find(c, str.find(c) + 1) != str.npos) {
                str.erase(str.find(c), 1);
            }
            if (!str.empty()) {
                result += toupper(str[0]);
                capitalize = false;
                str.erase(0, 1);
            }
        } else {
            result += (capitalize ? toupper(c) : tolower(c));
            capitalize = false;
        }
    }

    return result + str;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "Camel Case: " << camelCase(input) << std::endl;
    return 0;
}