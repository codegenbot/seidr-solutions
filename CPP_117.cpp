#include <initializer_list>

#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b);

std::vector<std::string> select_words(std::string s, int n);

int main() {
    std::string sentence = "Mary had a little lamb";
    int numWords = 4;
    std::vector<std::string> result = select_words(sentence, numWords);
    for (const auto& word : result) {
        std::cout << word << std::endl;
    }
    return 0;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) { 
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

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

assert (issame(select_words("a b c d e f", 1), std::vector<std::string>({"b", "c", "d", "f"})));