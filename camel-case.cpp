#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::vector<std::string> words;
    std::stringstream ss(input);
    std::string word;

    while (ss >> word) {
        words.push_back(word);
    }

    std::string result = "";
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0) {
            result += char(toupper(words[i][0]));
            result += words[i].substr(1);
        } else {
            result += words[i];
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;

    std::cout << camelCase(input) << std::endl;

    return 0;
}