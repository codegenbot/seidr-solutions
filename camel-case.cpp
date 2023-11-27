#include <iostream>
#include <string>
#include <vector>

std::string kebabToCamel(const std::string& kebab) {
    std::string camel;
    bool capitalizeNext = false;

    for (int i = 0; i < kebab.length(); i++) {
        if (kebab[i] == '-') {
            capitalizeNext = true;
        }
        else if (capitalizeNext) {
            camel += std::toupper(kebab[i]);
            capitalizeNext = false;
        }
        else {
            camel += kebab[i];
        }
    }

    return camel;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output;
    std::string word;
    std::vector<std::string> words;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            words.push_back(word);
            word = "";
        }
        else {
            word += input[i];
        }
    }

    words.push_back(word);

    for (int i = 0; i < words.size(); i++) {
        output += kebabToCamel(words[i]);

        if (i != words.size() - 1) {
            output += " ";
        }
    }

    std::cout << output << std::endl;

    return 0;
}