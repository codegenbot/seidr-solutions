#include <vector>
#include <algorithm>
#include <string>

std::string find_max(std::vector<std::string> words){
    std::string max_word = *max_element(words.begin(), words.end(), 
        [&](const std::string& a, const std::string& b) {
            return (a.size() == b.size()) ? a < b : a.size() < b.size();
        });
    for(std::string word:words){
        if(word.size() > max_word.size()){
            max_word = word;
        }
    }
    return max_word;
}