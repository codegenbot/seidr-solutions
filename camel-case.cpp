```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> arr;
    std::stringstream ss(str);
    std::string segment;

    while (std::getline(ss, segment, ' ')) {
        arr.push_back(segment);
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
            result += substring(segment, 1);
        }
    }

    return result;
}

std::string substring(const std::string& str, int start) {
    return str.substr(start);
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}