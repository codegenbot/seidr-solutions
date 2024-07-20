#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int left = 0;
    for(int i = 0; i < word.length(); i++) {
        if(!isalpha(word[i])) continue;
        if(isvowel(tolower(word[i]))) {
            while(i > left && !isalpha(word[left]) && i > left) {
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