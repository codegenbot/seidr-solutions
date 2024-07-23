#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string str) {
    std::stringstream words(str);
    std::string word;
    std::string result = "";

    while (words >> word) {
        if (!result.empty()) {
            result += std::toupper(word[0]);
            for (int i = 1; i < word.length(); ++i) {
                result += tolower((char)word[i]);
            }
        } else {
            result = word;
        }
    }

    return result;
}

int main() {
    std::cout << camelCase("b-excv eevny-mhmu-gq") << std::endl; 
    std::cout << camelCase("nospaceordash") << std::endl; 
    std::cout << camelCase("two-words") << std::endl; 
    std::cout << camelCase("all separate words") << std::endl; 
    return 0;
}