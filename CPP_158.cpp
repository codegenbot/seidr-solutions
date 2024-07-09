#include <string>
#include <vector>
#include <algorithm>

std::string find_max(std::vector<std::string> words) {
    std::string max_word = *max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    for (std::string word : words) {
        if (word.size() > max_word.size() || 
            (word.size() == max_word.size() && 
             std::count(word.begin(), word.end(), word[0]) > 
             std::count(max_word.begin(), max_word.end(), max_word[0]))) {
            max_word = word;
        }
    }
    return max_word;
}