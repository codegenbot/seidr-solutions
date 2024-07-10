#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::stringstream ss(s);
    std::string word;
    std::string result = "";
    bool firstWord = true;

    while (ss >> word) {
        if (!firstWord)
            result += char(toupper(word[0]));
        else
            result += word;

        for (int i = 1; i < word.size(); ++i) {
            result += tolower(word[i]);
        }
        firstWord = false;
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}