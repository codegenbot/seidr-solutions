#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::string a, std::string b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::tolower(a[i]) != std::tolower(b[i])) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> words;
    std::string word = "";
    for (char c : txt) {
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
        for (char c : txt) {
            if (std::islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        words.push_back(std::to_string(count));
    }
    return words;
}

int main() {
    // Implement main function logic here
    return 0;
}