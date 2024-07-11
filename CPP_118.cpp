#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string get_closest_vowel(std::string word) {
        int n = word.size();
        char closest_vowel = '\0';
        for(int i=n-1; i>=0; --i){
            if(!isalpha(word[i])) continue;
            if(vowel(word[i])){
                if(closest_vowel == '\0') closest_vowel = tolower(word[i]);
                else if(std::abs(i - (word.find(tolower(word[i])))) < std::abs(i - (word.find(tolower(closest_vowel))))) {
                    closest_vowel = tolower(word[i]);
                }
            }
        }
        return closest_vowel;
    }
    assert(get_closest_vowl("Above") == 'o');
    return 0;
}

bool vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}