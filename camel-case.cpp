#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || (input[i] == '-' && (i == 1 || input[i - 1] == '-'))) {
            if (start < i) {
                output += std::string(std::tolower(input.substr(start, i - start)));
            }
            if (i < input.size()) {
                output.push_back(toupper(input[i]));
                start = i + 1;
            } else {
                return output;
            }
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}