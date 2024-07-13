#include<string>
using namespace std;

string get_closest_vowel(string word) {
    int left = 0;
    for(int i = word.length() - 1; i >= 0; i--) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            for(int j = left; j < i; j++) {
                if(!isvowel(word[j])) {
                    return (word[i]);
                }
            }
            return "";
        }
        left++;
    }
    return "";
}

bool isvowel(char ch) {
    ch = tolower(ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return true;
    }
    return false;
}