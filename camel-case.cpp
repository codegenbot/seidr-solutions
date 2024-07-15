#include <string>

std::string camelCase(std::string input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == '-') {
            if (start < i) {
                output += std::string(input.substr(start, i - start)).substr(0, 1).toupper();
                output += std::string(input.substr(start, i - start)).substr(1);
            }
            if (i < input.size()) {
                if (input[i + 1] != '-') {
                    start = i + 1;
                } else {
                    ++i;
                }
            }
        }
    }

    return output;
}