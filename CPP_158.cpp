```cpp
#include <string>
#include <vector>
#include <algorithm>

int find_max(std::vector<std::string> words){
    std::string max_word = *std::max_element(words.begin(), words.end());
    for (const auto& word : words) {
        if (std::count(word.begin(), word.end(), std::unique(word.begin(), word.end())[0]) > std::count(max_word.begin(), max_word.end(), std::unique(max_word.begin(), max_word.end())[0])) {
            max_word = word;
        }
    }
    return 0;
}