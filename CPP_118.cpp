#include <string>

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    for(int i=n-1; i>=1; --i){
        if(!isalpha(word[i])) continue;
        if(vowel(tolower(word[i]))) {
            for(int j=i-1; j>=0; --j){
                if(!isalpha(word[j])) break;
                if(vowel(tolower(word[j]))){
                    return std::string(1, word[i]);
                }
            }
        }
    }
    return "";
}

bool vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}