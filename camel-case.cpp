#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string str) {
    std::stringstream words(str);
    std::string word;
    std::string result = "";

    while (words >> word) {
        if (!result.empty()) {
            result += char(toupper(word[0]));
            word = word.substr(1);
        }
        result += word;
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}