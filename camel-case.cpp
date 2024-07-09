#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(const std::string& str) {
    std::stringstream ss(str);
    std::string word;

    std::string result;
    bool capitalize = true;

    while (getline(ss, word, '-')) {
        if (capitalize) {
            result += toupper(word[0]);
            result += tolower(std::string(word.begin()+1, word.end()));
            capitalize = false;
        } else {
            result += word + " ";
        }
    }

    return result.substr(0, result.size()-1); 
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}