#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string get_closest_vowel(std::string word) {
        int n = word.size();
        for(int i=n-1; i>=0; --i){
            if(!isalpha(word[i])) continue;
            if(vowel(word[i])){
                return tolower(word[i]);
            }
        }
        return '\0';
    }

    bool vowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

    assert(get_closest_vowel("Above") == 'o');
    return 0;
}