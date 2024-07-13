```cpp
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> result;
    std::string segment = "";

    for (char c : str) {
        if (c == delimiter) {
            result.push_back(segment);
            segment = "";
        } else {
            segment += c;
        }
    }
    result.push_back(segment); // Don't forget the last segment
    return result;
}

std::string camelCase(const std::string& str) {
    std::vector<std::string> segments = split(str, '-');
    std::string result;

    for (int i = 0; i < segments.size(); i++) {
        if (!result.empty()) {
            result += toupper(segments[i][0]);
        } else {
            result += segments[i];
        }
        if (i < segments.size() - 1) {
            result += segments[i].substr(1);
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