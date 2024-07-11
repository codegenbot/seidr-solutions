```cpp
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string get_closest_vowel(std::string word) {
        int n = word.size();
        char closestVowel = '\0';
        for(int i=n-1; i>=0; --i){
            if(!isalpha(word[i])) continue;
            if(vowel(tolower(word[i])) && (closestVowel == '\0' || abs(i-n) < abs(word.find(closestVowel)-n))){
                closestVowel = word[i];
            }
        }
        return std::string(1, closestVowel);
    }

    bool vowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    assert(get_closest_vowel("Above") == "o");
    return 0;
}