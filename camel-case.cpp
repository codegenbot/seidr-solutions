#include <iostream>
#include <string>

std::string kebabToCamel(std::string s) {
    std::vector<std::string> words;
    std::stringstream ss(s);
    std::string word;

    while (getline(ss, word, '-')) {
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); ++i) {
        if (i > 0)
            s[0] = toupper(s[0]);
        for (char &c : s) {
            if (c == '-') {
                c = ' ';
                break;
            }
        }
    }

    return s;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase equivalent is: " << kebabToCamel(input) << std::endl;
    return 0;
}