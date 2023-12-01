#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int n = word.length();
    int i = n - 3;
    
    while (i >= 1) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i-1]) && !isalpha(word[i+1])) {
            return string(1, word[i]);
        }
        i--;
    }
    
    return "";
}