#include <string>
#include <vector>
#include <algorithm>

int find_max(std::vector<std::string> words){
    int max_length = 0;
    std::string max_word = *std::max_element(words.begin(), words.end(),
        [&max_length](const std::string& a, const std::string& b) {
            if(a.length() > b.length()) return false;
            else if(a.length() < b.length()) return true;
            else {
                for(size_t i = 0; i < a.length(); ++i) {
                    if(unique(a.begin(), a.end())[i] != unique(b.begin(), b.end())[i]) 
                        return a[i] < b[i];
                    }
                return false;
            }
        });
    return max_word.length();
}