#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& input) {
    std::string output;
    size_t pos = 0;

    while (pos < input.size()) {
        if (input.at(pos) != '-') {
            // Find the start of the next group
            size_t endPos = input.find('-', pos);
            if (endPos == std::string::npos)
                endPos = input.size();

            std::string word = input.substr(pos, endPos - pos);

            // Convert to camel case
            output += toupper(word[0]);
            for (size_t i = 1; i < word.size(); i++)
                output += tolower(word[i]);

            pos = endPos + 1;
        } else {
            output += '-';
            pos++;
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "Camel case: " << kebabToCamel(input) << std::endl;
    return 0;
}