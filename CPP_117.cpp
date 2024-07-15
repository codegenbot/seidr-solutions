#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> words;
    std::string word;
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else {
            words.push_back(word);
            word = "";
        }
    }
    words.push_back(word);

    std::vector<std::string> selected_words;
    if (n <= words.size() && n >= 1) {
        selected_words.push_back(words[n]);
    }

    return selected_words;
}