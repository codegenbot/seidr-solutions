```cpp
#include <string>
#include <vector>
#include <algorithm>

int find_max(std::vector<std::string> words){
    auto max_word = *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            return a.size() < b.size();
        });
    for(const auto& word : words){
        if(std::count(word.begin(), word.end(), word[0]) > 
           std::count(max_word.begin(), max_word.end(), max_word[0])){
            max_word = word;
        }
    }
    return std::count_if(max_word.begin(), max_word.end(),
                         [](unsigned char c) { return c == 'a'; });
}