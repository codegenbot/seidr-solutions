#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string s) {
    std::stringstream words(s, ' ');
    std::string result;
    bool capitalize = true;

    if (!words.str().empty()) {
        result = words.str();
        words >> ws; // skip the first word
    }

    while (words >> word) {
        if (capitalize)
            result += toupper(word[0]) + tolower(word.substr(1));
        else
            result += word;
        capitalize = true;
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "The camelCase conversion is: " << camelCase(input) << std::endl;

    return 0;
}