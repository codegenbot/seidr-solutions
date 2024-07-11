```cpp
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string get_closest_vowel(std::string word) {
        int n = word.size();
        char closestVowel = '\0';
        for(int i=n-1; i>=1; --i){
            if(!std::isalpha(word[i])) continue;
            if(std::tolower(word[i]) == 'a' || std::tolower(word[i]) == 'e' || 
               std::tolower(word[i]) == 'i' || std::tolower(word[i]) == 'o' || 
               std::tolower(word[i]) == 'u'){
                closestVowel = word[i];
                break;
            }
        }
        if(closestVowel == '\0') return "";
        else return std::string(1, closestVowel);
    }

    assert(get_closest_vowel("Above") == "o");
    return 0;
}