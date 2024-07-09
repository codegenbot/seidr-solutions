#include <string>
#include <vector>
#include <algorithm>

int find_max(std::vector<std::string> words){
    int max_count = 0;
    std::string max_word = *std::max_element(words.begin(), words.end());
    for(string word : words){
        if(count(word.begin(), word.end(), unique(word.begin(), word.end())) > max_count){
            max_count = count(word.begin(), word.end(), unique(word.begin(), word.end()));
            max_word = word;
        }
    }
    return max_count;
}