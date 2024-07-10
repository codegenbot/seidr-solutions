```cpp
#include <initializer_list>

#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::string& b);

std::vector<std::string> select_words(std::string s, int n);

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> words;
    std::string word;
    for(char c : s) {
        if(c == ' ') {
            if(!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()) {
        words.push_back(word);
    }
    
    std::vector<std::string> result;
    for(int i = 0; i < n && i < words.size(); i++) {
        result.push_back(words[i]);
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::string& b) { 
    if(a.size() != 1) return false;
    for(int i = 0; i < a[0].size(); i++) {
        if(a[0][i] != b[i]) return false;
    }
    return true;
}