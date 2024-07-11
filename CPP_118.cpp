#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string get_closest_vowel(std::string word) {
        int n = word.size();
        for(int i=n-1; i>=0; --i){
            if(!isalpha(word[i])) continue;
            if(vowel(tolower(word[i]))){
                for(int j=i-1; j>=0 && !isalpha(word[j]); --j);
                return word[j+1];
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