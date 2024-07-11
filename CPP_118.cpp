```cpp
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string get_closest_vowel(std::string word) {
        int n = word.size();
        for(int i=n-1; i>=0; --i){
            if(!isalpha(word[i])) continue;
            char c = tolower(word[i]);
            if(vowel(c)){
                for(int j=i+1; j<n; ++j){
                    if(!isalpha(word[j])) break;
                    if(vowel(tolower(word[j]))) return std::string(1, c);
                }
            }
        }
        return "";
    }

    bool vowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    assert(get_closest_vowel("Above") == "o");
    return 0;
}