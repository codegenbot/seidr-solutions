#include <vector>
#include <algorithm>
#include <string>

std::string find_max(std::vector<std::string> words) {
    std::string max_word = *std::min_element(words.begin(), words.end());
    for (const auto& word : words) {
        if (std::count(word.begin(), word.end(), unique(word.begin(), word.end())) > std::count(max_word.begin(), max_word.end(), unique(max_word.begin(), max_word.end()))) {
            max_word = word;
        }
    }
    return max_word;
}