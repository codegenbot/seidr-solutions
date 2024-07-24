```cpp
#include <string>
#include <vector>

int find_max(std::vector<std::string> words){
    int max_length = -1;
    string max_word;

    for(const auto &word : words){
        if(word[0] == ' ') continue; // Ignore spaces at the beginning of a word
        
        if(count(word.begin(), word.end(), word[0]) > max_length){
            max_length = count(word.begin(), word.end(), word[0]);
            max_word = word;
        }
    }

    return max_length;
}