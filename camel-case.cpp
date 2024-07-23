#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    std::string word;

    // Split string into words
    for (char c : str) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else if (c == '-') {
            while (str.find(c) != str.npos && i++ < str.size()) {
                if (str[i] == '-'){
                    str.erase(i, 1);
                }
                else
                break;
            }
            word += toupper(c);
        } else {
            word += c;
        }
    }

    words.push_back(word);

    // Convert first character of each word to lowercase and append rest of the string
    std::string result;
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0) {
            result += toupper(words[i][0]);
        } else {
            result += words[i];
        }
        if (i < words.size() - 1) {
            result += words[i + 1];
        }
    }

    return result;
}

int main() {
    std::string str;
    while(std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}