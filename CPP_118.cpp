```cpp
#include <string>

std::string get_closest_vowel(std::string word){
    int n = word.size();
    for(int i=n-1; i>0; --i){
        if(!isalpha(word[i])) continue;
        if(isvowel(tolower(word[i]))){
            return std::string(1, tolower(word[i]));
        }
        while(i > 0 && !isalpha(word[i-1])){
            i--;
        }
        if(isvowel(tolower(word[i-1]))){
            return std::string(1, tolower(word[i-1]));
        }
    }
    return "";
}