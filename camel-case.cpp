#include <iostream>
#include <string>

std::string kebabToCamel(std::string str) {
    std::string camelCase;
    bool capitalize = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            capitalize = true;
        } else if (str[i] == ' ') {
            camelCase += ' ';
            capitalize = false;
        } else {
            if (capitalize) {
                camelCase += toupper(str[i]);
                capitalize = false;
            } else {
                camelCase += str[i];
            }
        }
    }

    return camelCase;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = kebabToCamel(input);
    std::cout << output << std::endl;

    return 0;
}