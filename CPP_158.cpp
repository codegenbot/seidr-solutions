#include <map>
using namespace std;

string find_max(vector<string> words) {
    string max_word = "";
    int max_unique_chars = 0;
    
    for (const auto& word : words) {
        map<char, bool> unique_chars;
        
        int count = 0;
        for (char c : word) {
            if (!unique_chars[c]) {
                unique_chars[c] = true;
                count++;
            }
        }
        
        if (count > max_unique_chars || (count == max_unique_chars && word < max_word)) {
            max_word = word;
            max_unique_chars = count;
        }
    }
    
    return max_word;
}