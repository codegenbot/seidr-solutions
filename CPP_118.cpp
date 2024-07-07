#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word){
    int i = word.size() - 1;
    while(i > 0 && !isvowel(word[i])){
        i--;
    }
    if(i == 0) return "";
    for(int j = i-1; j >= 0; j--){
        if(isvowel(word[j])) return string(1,word[j]);
    }
    return "";
}

bool isvowel(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}