#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
        } else {
            word += s[i];
        }
    }

    if (!word.empty()) {
        result.push_back(word);
    }

    std::vector<std::string> selected_words;
    if (n <= result.size() - 2) {
        for (int i = 1; i <= n; i++) {
            selected_words.push_back(result[i]);
        }
    }

    return selected_words;
}
