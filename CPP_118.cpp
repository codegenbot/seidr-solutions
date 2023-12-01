#include <string>

using namespace std;

string get_closest_vowel(string word){
    int len = word.length();
    for(int i = len-2; i >= 0; i--){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
           word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'){
            return string(1, word[i]);
        }
        if(word[i] != ' ' || word[i-1] != ' ' || word[i+1] != ' '){
            return "";
        } else {
            return "";
        }
    }
    return "";
}