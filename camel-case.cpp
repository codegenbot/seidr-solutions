#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;

    while (getline(ss, word, '-')) {
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); ++i) {
        if (!i) {
            for (char& c : words[0]) {
                c = toupper(c);
            }
        } else {
            std::string wordUpper = "";
            for (char& c : words[i]) {
                if (isalpha(c)) {
                    wordUpper += tolower(c);
                } else {
                    wordUpper += c;
                }
            }
            words[0] += wordUpper;
            break;
        }
    }

    std::string result;
    for (int i = 0; i < words.size(); ++i) {
        if (!i) {
            result += words[i];
        } else {
            result += char(toupper(words[i][0])) + words[i].substr(1);
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