```
#include <string>
#include <algorithm>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    size_t pos = 0;
    
    while (pos <= s.length()) {
        if (pos == s.length() || s[pos] != ' ') {
            string word = s.substr(pos);
            sort(word.begin(),word.end());
            result += word;
            pos = s.find(' ', pos) + 1;
        } else {
            pos++;
        }
    }
    
    return result;
}