```cpp
#include <vector>
#include <set>
#include <string>

std::string find_max(const std::vector<std::string>& words) {
    vector<string> words_copy = words; 
    string max_str;
    int max_unique_chars = 0;

    for (const auto& word : words_copy) {
        int unique_chars = 0;
        set<char> char_set(word.begin(), word.end());
        for (auto c : char_set) {
            if (c == ' ') continue; 
            unique_chars++;
        }
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_str)) {
            max_str = word;
            max_unique_chars = unique_chars;
        }
    }

    return max_str;
}