#include <string>
#include <vector>
#include <algorithm>

std::string find_max(std::vector<std::string> words) {
    std::string max_word = *max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (std::string word : words) {
        if (word.length() == max_word.length() && 
            std::count(word.begin(), word.end(), *unique(word.begin(), word.end()).begin()) == 1) {
            max_word = word;
            break;
        }
    }
    return max_word;
}