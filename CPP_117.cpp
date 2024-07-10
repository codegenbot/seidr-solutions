```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> words;
    std::string word;
    
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else if (c != '\0') { 
            word += c;
        }
    }
    
    if (!word.empty()) {
        words.push_back(word);
    }
    
    std::vector<std::string> result = {};  
    for(int i = 0; i < n && i < words.size(); i++) {
        result.push_back(words[i]);
    }
    return result;
}

int main() {
    std::string s = "Mary had a little lamb";
    int n = 4;
    std::vector<std::string> res = select_words(s, n);
    for (std::string str : res) {
        std::cout << str << std::endl;
    }
    return 0;
}