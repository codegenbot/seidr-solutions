#include <string>

string get_closest_vowel(string word){
    int n = word.size();
    string closestVowel;
    for(int i=n-1; i>0; --i){
        if(!isalpha(word[i])) continue;
        if(isvowel(tolower(word[i]))){
            closestVowel = tolower(word[i]);
            return closestVowel;
        }
        while(i > 0 && !isalpha(word[i-1])){
            i--;
        }
        if(isvowel(tolower(word[i-1]))){
            closestVowel = tolower(word[i-1]);
            return closestVowel;
        }
    }
    return "";
}