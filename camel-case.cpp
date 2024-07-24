#include <iostream>
#include <cctype>
#include <sstream>

std::string camelCase(std::string str) {
    std::stringstream words;
    words << str;

    std::string result = "";
    bool capitalizeNext = true;

    for (std::string word; words >> word;) {
        if (!word.empty() && word[0] == '-') {
            word = word.substr(1);
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(word[0]);
            capitalizeNext = false;
        } else {
            result += word;
        }
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