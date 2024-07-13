#include <iostream>
#include <string>

std::vector<std::string> split(const std::string& str, char sep) {
    std::vector<std::string> parts;
    size_t pos = 0;

    while ((pos = str.find(sep)) != std::string::npos) {
        parts.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }

    parts.push_back(str);

    return parts;
}

std::string camelCase(const std::string& str) {
    std::vector<std::string> parts = split(str, '-');
    std::string result;
    bool capitalize = true;

    for (const auto& part : parts) {
        if (capitalize) {
            result += toupper(part[0]);
            capitalize = false;
        } else {
            result += part.substr(1);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}