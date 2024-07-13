#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

bool vowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string get_closest_vowel(string word){
    for(int i = word.length() - 1; i > 0; i--){
        if(vowel(word[i])){
            for(int j = i - 1; j >= 0; j--){
                if(!vowel(word[j])){
                    return string(1, word[i]);
                }
            }
        }
    }
    return "";
}