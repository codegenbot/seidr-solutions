```
#include <string>
#include <cctype>

std::string camelCase(std::string input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == '-') {
            if (start < i) {
                if (i > start) {
                    output += std::string(input.substr(start, i - start)).erase(0, 1);
                } else {
                    output += input.substr(start, i - start).erase(0, 1);
                }
                output = std::string(std::tolower(output));
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