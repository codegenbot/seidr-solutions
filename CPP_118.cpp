#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word){
    int i = word.size() - 1;
    while(i > 0 && !isvowel(word[i])) i--;
    if(i == 0) return "";
    for(int j = i-1; j >= 0 && !isconsonant(word[j]); j--);
    return word.substr(j+1, i-j-1);
}

bool isvowel(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isconsonant(char c){
    c = tolower(c);
    return !isvowel(c) && (c >= 'b' && c <= 'z');
}