```cpp
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> arr;
    std::string buffer;

    for (const auto& word : str) {
        if (word == ' ') {
            if (!buffer.empty()) {
                arr.push_back(buffer);
                buffer = ""; 
            }
        } else if (word != delimiter) {
            buffer += word;
        }

        // No need to check for '\0' here
    }

    if (!buffer.empty()) {
        arr.push_back(buffer);
    }

    return arr;
}

std::string camelCase(const std::vector<std::string>& segments) {
    std::string result;

    for (const auto& segment : segments) {
        if (!result.empty()) {
            result += toupper(segment[0]);
        } else {
            result += tolower(segment[0]);
        }
        if (segment.size() > 1) {
            result += &segment[1];
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::vector<std::string> segments = split(input, '-');
    std::cout << "camelCase: " << camelCase(segments) << std::endl;

    return 0;
}