#include <string>
using namespace std;

string get_closest_vowel(string word) {
    for(int i = word.size() - 1; i >= 2; i--) {
        if("aeiouAEIOU".find(tolower(word[i])) != string::npos && isalpha(word[i-1]) && !isvowel(word[i-1])) 
            return tolower(word[i]);
    }
    return "";
}

bool isvowel(char ch) {
    return "aeiou".find(tolower(ch)) != string::npos;
}