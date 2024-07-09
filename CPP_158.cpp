#include <string>
#include <vector>
#include <algorithm>

int find_max(std::vector<std::string> words){
    string max_word = *max_element(words.begin(), words.end());
    for(string word : words){
        if(unique_copy(word.begin(), word.end(), unique_copy(max_word.begin(), max_word.end())) > 0){
            max_word = word;
        }
    }
    return count(unique_copy(max_word.begin(), max_word.end()), max_word.end(), max_word[0]);
}