```cpp
#include <initializer_list>

#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string>& b);

std::vector<std::string> select_words(std::string s, int n);

int main() {
    std::string s = "Mary had a little lamb";
    int n = 4;
    assert(std::vector<stdstring>(select_words(s, n)) == std::vector<stdstring>({"Mary", "had", "a", "little"}));
    return 0;
}

bool issame(std::vector<stdstring> a, std::vector<stdstring>& b) { 
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<stdstring> select_words(std::string s, int n) {
    std::vector<stdstring> words;
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
    
    std::vector<stdstring> result;
    for(int i = 0; i < n && i < words.size(); i++) {
        result.push_back(words[i]);
    }
    return result;
}