#include <string>
#include <cctype>

bool isvowel(char ch){
    ch = tolower(ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return true;
    }
    return false;
}

std::string get_closest_vowel(std::string word){
    int n = word.size();
    for(int i=n-1; i>=0; i--){
        if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')){
            for(int j=i-1; j>=0; j--){
                if (!((word[j] >= 'a' && word[i] <= 'z') || (word[j] >= 'A' && word[i] <= 'Z'))){
                    return (char)word[i];
                }
            }
        }
    }
    return "";
}