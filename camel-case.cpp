```cpp
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> segments = split(str, '-');
    std::string result;

    for (const auto& segment : segments) {
        if (!result.empty()) {
            result += toupper(segment[0]);
        } else {
            result += tolower(segment[0]);
        }
        if (segment.size() > 1) {
            result += segment.substr(1);
        }
    }

    return result;
}

std::string split(const std::string& str, char delimiter) {
    std::string buffer;

    for (const auto& word : str) {
        if (word == ' ' || word == delimiter) {
            if (!buffer.empty()) {
                buffer += ' ';
            }
        } else {
            buffer += word;
        }
    }

    return buffer;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}