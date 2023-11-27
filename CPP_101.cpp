#include <iostream>
#include <vector>

typedef std::basic_string<char> std::string;

std::vector<std::string> words_string(const std::string& s) {
    std::vector<std::string> words;
    std::string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == ',') {
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    if (word != "") {
        words.push_back(word);
    }
    return words;
}

bool issame(const std::vector<std::string>&, const std::vector<std::string>&);

bool issame(const std::vector<std::string>&, const std::vector<std::string>&);
