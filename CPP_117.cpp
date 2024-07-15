#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> words;
    std::string word;
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    std::vector<std::string> selected_words;

    if (n > 0 && n <= words.size()) {
        selected_words.push_back(words[n]);
    }

    return selected_words;
}