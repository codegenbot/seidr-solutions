#include <vector>
#include <string>
#include <unordered_set>
#include <cassert>

string find_max(const vector<string>& words) {
    assert(!words.empty());
    
    string max_word = words[0];
    int max_unique_chars = unordered_set<char>(max_word.begin(), max_word.end()).size();
    
    for (const string& word : words) {
        int unique_chars = unordered_set<char>(word.begin(), word.end()).size();
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)) {
            max_unique_chars = unique_chars;
            max_word = word;
        }
    }
    
    return max_word;
}  