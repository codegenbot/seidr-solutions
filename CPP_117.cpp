```cpp
#include <vector>
#include <string>
#include <cctype>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            bool has_n_consonants = false;
            int consonant_count = 0;
            for (char ch : word) {
                if (!ispunct(ch) && !isspace(ch) && !isvowel(tolower(ch))) {
                    consonant_count++;
                    if (consonant_count == n) {
                        has_n_consonants = true;
                        break;
                    }
                }
            }
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}

int main(){
    assert (issame(std::vector<std::string>(select_words("a b c d e f", 1)) , std::vector<std::string>({"b","c","d","f"})));
    return 0;
}