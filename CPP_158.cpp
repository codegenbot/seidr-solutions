#include <string>
#include <vector>
#include <algorithm>

std::string find_max(std::vector<std::string> words){
    std::string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a > b;
            }
            return a.size() < b.size();
        });
    for(const auto &word : words){
        set<char> unique_chars(word.begin(), word.end());
        if(unique_chars.size() > result.find_first_of(word[0])){
            result = word;
        }
    }
    return result;
}