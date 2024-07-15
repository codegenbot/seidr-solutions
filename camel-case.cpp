#include <string>

std::string camelCase(std::string input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == '-') {
            if (start < i) {
                output += std::string(std::tolower(input[start]), i - start);
            }
            if (i < input.size()) {
                if (input[i + 1] != '-') {
                    output.push_back(toupper(input[i]));
                } else {
                    ++i;
                }
            }
            start = i + 1;
        }
    }

    return output;