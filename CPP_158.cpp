#include <string>
#include <vector>
#include <algorithm>

int find_max(std::vector<std::string> words){
    auto max_word = *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            return a.size() < b.size();
        });
    for(const string& word : words){
        if(count(word.begin(), word.end(), unique(word.begin(), word.end())) > count(max_word.begin(), max_word.end(), unique(max_word.begin(), max_word.end()))){
            max_word = word;
        }
    }
    return distance(words.begin(), equal(find_if(words.begin(), words.end(),
        [](const string& s) { return s == max_word; }), words.end()));
}