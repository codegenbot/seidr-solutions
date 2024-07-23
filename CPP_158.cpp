#include <iostream>
#include <vector>
#include <set>
#include <string>

std::string find_max(std::vector<std::string> words) {
    std::sort(words.begin(), words.end(), [](const auto& a, const auto& b) { return a.size() < b.size(); });
    
    for (const auto& word : words) {
        std::set<char> unique_chars(word.begin(), word.end());
        if (unique_chars.size() > 0) {
            return word;
        }
    }

    return "";
}