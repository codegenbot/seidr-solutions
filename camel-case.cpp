Here is the modified code:

#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = false;

    for (char c : str) {
        if (c == '-') {
            if (!capitalize) {
                result += toupper(str[0]);
                capitalize = true;
                str.erase(0, 1);
            }
        } else if (capitalize) {
            result += tolower(c);
            capitalize = false;
        } else {
            result += c;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "Resulting camelCase: " << camelCase(input) << std::endl;

    return 0;
}