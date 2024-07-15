#include <string>
#include <cctype>

std::string camelCase(std::string input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == '-') {
            if (start < i) {
                output += std::string(input.substr(start, i - start)).erase(0, 1).substr(0, 1).toUpper() + std::string(std::tolower(input.substr(start, i - start))).substr(1);
            }
            if (i < input.size()) {
                if (input[i + 1] == '-') continue;
                output.push_back(toupper(input[i]));
                start = i + 1;
            } else {
                return output;
            }
        }
    }

    return output;
}