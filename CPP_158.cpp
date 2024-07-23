#include <iostream>
#include <vector>
#include <set>
#include <string>

std::string find_max(std::vector<std::string> words) {
    std::string max_word = "";
    int max_unique_chars = 0;

    for (const auto& word : words) {
        std::set<char> unique_chars(word.begin(), word.end());
        if ((int)unique_chars.size() >= max_unique_chars) {
            if ((int)unique_chars.size() > max_unique_chars || (int)unique_chars.size() == max_unique_chars && word.length() > max_word.length()) {
                max_unique_chars = (int)unique_chars.size();
                max_word = word;
            }
        }
    }

    return max_word;
}