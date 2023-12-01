#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string find_max(const std::vector<std::string>& words){
    std::string max_word = "";
    int max_unique_chars = 0;

    for(const std::string& word : words){
        int unique_chars = 0;
        int char_count[26] = {0};

        for(char c : word){
            if(char_count[c - 'a'] == 0){
                unique_chars++;
                char_count[c - 'a'] = 1;
            }
        }

        if(unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)){
            max_word = word;
            max_unique_chars = unique_chars;
        }
    }

    return max_word;
}

int main() {
    assert (find_max({"play", "play", "play"}) == "play");

    return 0;
}