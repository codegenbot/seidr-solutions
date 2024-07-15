#include <string>

std::string camelCase(std::string input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == '-') {
            if (start < i) {
                output += std::string(1, std::toupper(input[start])) + std::string(std::to_string(i - start).size(), std::tolower(input.substr(start, i - start)));
            }
            if (i < input.size()) {
                if (input[i + 1] == '-') continue;
                start = i + 1;
            } else {
                return output;
            }
        }
    }

    return output;
}