#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& input) {
    std::string output;
    for (const auto& word : input + " ") {
        if (word == ' ') {
            output[0] = toupper(output[0]);
            output.insert(0, 1, '-');
        } else if (!output.size()) {
            output += tolower(word);
        } else {
            output += toupper(word[0]) + (std::string(word).substr(1));
        }
    }
    return output;
}

int main() {
    std::cout << kebabToCamel("nospaceordash") << std::endl;
    std::cout << kebabToCamel("two-words") << std::endl;
    std::cout << kebabToCamel("two words") << std::endl;
    std::cout << kebabToCamel("all separate words") << std::endl;
    return 0;
}