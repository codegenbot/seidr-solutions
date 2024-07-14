```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::string buffer;
    std::vector<std::string> arr;

    for (char c : str) {
        if (c == ' ') {
            if (!buffer.empty()) {
                arr.push_back(buffer);
                buffer = ""; 
            }
        } else if (c != '-' && c != delimiter) {
            buffer += c;
        }

        if (c == '\0' || c == delimiter) { 
            if (c != '\0' && !buffer.empty()) {
                arr.push_back(buffer);
                buffer = ""; 
            }
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

    for (int i = 0; i < segments.size(); i++) {
        if (!result.empty()) {
            result += toupper(segments[i][0]);
        } else {
            result += tolower(segments[i][0]);
        }
        if (i > 0) {
            for (char c : segments[i]) {
                if (c >= 'a' && c <= 'z') {
                    result += (char)(c - 'a' + 'A');
                } else {
                    result += c;
                }
            }
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