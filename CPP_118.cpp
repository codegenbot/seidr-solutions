#include<stdexcept>
using namespace std;

string get_closest_vowel(string word){
    int left = 0;
    for(int right = word.size() - 1; right >= 0 && !isVowel(word[right]); right--) {
        left = right + 1;
    }
    for(int i = 0; i < word.size(); i++) {
        if(isVowel(word[i])) {
            return word.substr(i, 1);
        }
    }
    return "";
}

bool isVowel(char c) {
    c = toupper(c);
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}