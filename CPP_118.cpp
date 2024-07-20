#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    for(int i = 0; i < word.length(); i++) {
        if(isalpha(word[i])) {
            if(isvowel(tolower(word[i]))) return std::string(1, tolower(word[i]));
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
}