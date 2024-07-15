#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& words) {
    return words.size() == 1 && words[0] == "same";
}

std::vector<std::string> split_words(const std::string& txt) {
    std::vector<std::string> words;
    std::string word = "";
    for (char& c : txt) {
        if (c == ' ' || c == ',') {
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

    if (words.empty()) {
        int count = 0;
        for (char& c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        words.push_back(std::to_string(count));
    }

    return words;
}