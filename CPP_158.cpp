#include <vector>
#include <string>

std::string find_max(std::vector<std::string> words) {
    std::vector<std::string> v = words;
    std::string max_str;
    int max_unique_chars = 0;

    for (const auto& word : v) {
        int unique_chars = 0;
        std::set<char> char_set(word.begin(), word.end());
        for (auto c : char_set) {
            if (c == ' ') continue; // ignore spaces
            unique_chars++;
        }
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word.length() > max_str.length())) {
            max_str = word;
            max_unique_chars = unique_chars;
        }
    }
    return max_str;
}