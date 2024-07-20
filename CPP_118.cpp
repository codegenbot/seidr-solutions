#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int left = 0;
    for(int i = 0; i < word.length(); i++) {
        if(!isalpha(word[i])) continue;
        if(isvowel(word[i])) {
            while(left < i && !isalpha(word[left]) && left < i) {
                left++;
            }
            return string(1, tolower(word[i]));
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");  
}