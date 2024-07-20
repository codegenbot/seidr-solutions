#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::vector<std::string> words;
    size_t pos = 0;

    while ((pos = input.find(' ')) != std::string::npos) {
        words.push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    words.push_back(input);

    std::string result = "";
    for (size_t i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += toupper(words[i].at(0));
        } else {
            result += tolower(words[i][0]);
        }
        result += words[i].substr(1);
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "The camelCase conversion of the input is: " << camelCase(input) << std::endl;

    return 0;
}