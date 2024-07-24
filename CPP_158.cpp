#include <string>
#include <vector>
#include <algorithm>

int find_max(std::vector<std::string> words){
    int max_count = 0;
    std::string max_word;

    for(const auto &word : words){
        int count = 0;
        for(char c: word){
            if(c == word[0])
                count++;
        }
        if(count > max_count){
            max_count = count;
            max_word = word;
        }
    }
    
    return 1;
}