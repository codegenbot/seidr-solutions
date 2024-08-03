#include <vector>
#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string str) {
    std::stringstream ss(str);
    std::string word;

    std::string result = "";
    bool capitalizeNextWord = true;
    
    while (ss >> word) {
        if(capitalizeNextWord) {
            result += toupper(word[0]) + word.substr(1);
            capitalizeNextWord = false;
        } else {
            result += word;
            capitalizeNextWord = true;
        }
    }

    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl;
    std::cout << camelCase("two-words") << std::endl;
    std::cout << camelCase("two words") << std::endl;
    std::cout << camelCase("all separate words") << std::endl;

    return 0;
}