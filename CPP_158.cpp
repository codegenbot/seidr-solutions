#include <string>
#include <vector>
#include <algorithm>

int find_max(std::vector<std::string> words){
    auto max_word = *std::max_element(words.begin(), words.end());
    for(const std::string& word : words){
        if(std::count(word.begin(), word.end(), unique(word.begin(), word.end())) > std::count(max_word.begin(), max_word.end(), unique(max_word.begin(), max_word.end()))){
            max_word = word;
        }
    }
    return std::hash<std::string>{}(max_word);
}