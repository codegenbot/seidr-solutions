#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::vector<std::string> words;
    std::string word;

    for (char c : input) {
        if (c == '-') {
            words.push_back(word);
            word.clear();
        } else if (c == ' ') {
            continue;
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    std::string result;

    for (int i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += char toupper(words[i][0]);
            result += words[i].substr(1);
        } else {
            result = words[i];
        }
    }

    return result;
}

int main() {
    std::string input;

    while (true) {
        std::cout << "Enter a string in kebab-case or 'q' to quit: ";
        std::cin >> input;

        if (input == "q") {
            break;
        }

        std::cout << camelCase(input) << std::endl;
    }

    return 0;
}