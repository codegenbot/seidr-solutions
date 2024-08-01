#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result = "";
    bool capitalize = true;
    std::string word = "";

    for (char c : s) {
        if (c == '-') {
            result += toupper(word[0]);
            word = "";
            capitalize = true;
        } else {
            word += c;
            if (!capitalize) {
                result += tolower(c);
                capitalize = !capitalize;
            } else {
                result += c;
            }
        }
    }

    if (word.empty()) {
        return result;
    } else {
        result += toupper(word[0]);
        for (int i = 1; i < word.size(); ++i) {
            result += tolower(word[i]);
        }
        return result;
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "CamelCase representation: " << kebabToCamel(input) << std::endl;

    return 0;
}