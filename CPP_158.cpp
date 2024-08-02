#include <vector>
#include <algorithm>
#include <set>
#include <string>

std::string find_max(std::vector<std::string> words) {
    std::string max_word = *max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (auto word : words) {
        int unique_chars = 0;
        std::set<char> char_set(word.begin(), word.end());
        unique_chars = char_set.size();
        if (unique_chars > max_word.length()) {
            max_word = word;
        }
    }
    return max_word;
}