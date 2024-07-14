```cpp
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cctype>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> segments;
    size_t start = 0;
    size_t end = str.find(delimiter);

    while (end != std::string::npos) {
        std::string segment = str.substr(start, end - start);
        if (!segment.empty()) {
            segments.push_back(segment);
        }
        start = end + 1;
        end = str.find(delimiter, start);
    }

    std::string segment = str.substr(start);
    if (!segment.empty()) {
        segments.push_back(segment);
    }

    return segments;
}

std::string camelCase(const std::string& str) {
    std::vector<std::string> segments = split(str, '-');
    std::string result;

    for (size_t i = 0; i < segments.size(); ++i) {
        if (!result.empty()) {
            result[0] = std::toupper(result[0]);
        }
        if (!segments[i].empty() && i > 0) { 
            result += std::tolower(segments[i][0]);
        } else {
            result += segments[i];
        }
    }

    return result;
}

int main() {
    std::string str = "camel-case example-test-string";
    std::cout << camelCase(str) << std::endl;
}