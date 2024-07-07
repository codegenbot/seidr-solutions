#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> words;
    std::string word = "";
    for (char c : str) {
        if (c == '-') {
            words.push_back(word);
            word = "";
        } else if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    std::string result;
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0) {
            result += std::toupper(words[i][0]);
            result += words[i].substr(1).tolower();
        } else {
            result += words[i];
        }
    }

    return result;
}

int main() {
    int numCases;
    cin >> numCases;
    for (int i = 0; i < numCases; ++i) {
        std::string str;
        cin >> str;
        cout << camelCase(str) << endl;
    }
    return 0;
}