#include <string>
#include <set>

std::string find_max(vector<string> words){
    std::string max_word = "";
    int max_unique_chars = 0;
    
    for (const std::string& word : words) {
        int unique_chars = std::set<char>(word.begin(), word.end()).size();
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)) {
            max_unique_chars = unique_chars;
            max_word = word;
        }
    }
    
    return max_word;
}