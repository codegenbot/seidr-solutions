```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> arr;
    std::string buffer;

    for (const auto& word : str) {
        if (word == ' ' || word == delimiter) {
            if (!buffer.empty()) {
                arr.push_back(buffer);
                buffer = ""; 
            }
        } else {
            buffer += word;
        }
    }

    if (!buffer.empty()) {
        arr.push_back(buffer);
    }

    return arr;
}

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
            result += segment.substr(1); // Directly concatenate the rest of the segment
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