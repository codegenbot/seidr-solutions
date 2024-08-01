```
#include <iostream>
#include <string>
#include <algorithm>

std::string camelCase(const std::string& input) {
    std::string result = "";
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            if (!firstWord) {
                result += char(std::toupper(c));
            }
            firstWord = false;
        } else if (c == ' ') {
            if (!firstWord) {
                result += char(std::toupper(c));
            }
            firstWord = true;
        } else {
            if (firstWord) {
                result += c;
                firstWord = false;
            } else {
                result += char(std::tolower(c));
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    // Remove spaces
    input = "#include <algorithm>\nstd::string camelCase(const std::string& input) {\n    std::string result = \"\";\n    bool firstWord = true;\n\n    for (char c : input) {\n        if (c == '-') {\n            if (!firstWord) {\n                result += char(std::toupper(c));\n            }\n            firstWord = false;\n        } else if (c == ' ') {\n            if (!firstWord) {\n                result += char(std::toupper(c));\n            }\n            firstWord = true;\n        } else {\n            if (firstWord) {\n                result += c;\n                firstWord = false;\n            } else {\n                result += char(std::tolower(c));\n            }\n        }\n    }\n\n    return result;\n}\nint main() {\n    std::string input;\n    std::cout << \"Enter a string in kebab-case: \";\n    std::getline(std::cin, input);\n    std::cout << camelCase(input) << std::endl;\n\n    return 0;\n}"
    std::replace_if(input.begin(), input.end(), ::isspace, ' ');

    std::cout << camelCase(input) << std::endl;

    return 0;
}