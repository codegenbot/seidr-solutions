#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int closest = -1;
    for(int i = 0; i < word.length(); i++) {
        if(isalpha(word[i])) {
            if(isvowel(tolower(word[i]))) {
                if(closest == -1 || i < closest) {
                    closest = i;
                }
            }
        }
    }
    if(closest != -1) {
        return string(1, tolower(word[closest]));
    } else {
        return "";
    }
}

int main() {
    assert(get_closest_vowel("Above") == "o");  
}