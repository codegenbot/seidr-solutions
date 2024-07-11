#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string get_closest_vowel(std::string word) {
        int n = word.size();
        for(int i=n-1; i>=0; --i){
            if(!isalpha(word[i])) continue;
            if(vowel(tolower(word[i]))){
                return 1;
            }
        }
        return -1;
    }

    bool vowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    assert(get_closest_vowel("Above") == 0);
    return 0;
}