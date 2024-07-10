#include <iostream>
#include <vector>
#include <string>
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
        if (word.length() > max_word.length() || 
            (word.length() == max_word.length() && 
             std::count(word.begin(), word.end(), unique(word.begin(), word.end())[0]) > 
             std::count(max_word.begin(), max_word.end(), unique(max_word.begin(), max_word.end())[0]))) {
            max_word = word;
        }
    }
    return max_word;
}