#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> result;
    std::string buffer;

    for (char c : str) {
        if (c == delimiter)
            continue;
        buffer += c;

        if (c == delimiter || c == '\0') {
            result.push_back(buffer);
            buffer.clear();
        }
    }

    return result;
}

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (const auto& segment : split(str, '-')) {
        if (!segment.empty()) {
            if (capitalize)
                result += toupper(segment[0]);
            else
                result += segment.substr(1);
            capitalize = !capitalize;
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