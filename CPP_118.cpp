#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word){
    for(int i = word.length() - 1; i > 0; i--){
        if(vowels.find(word[i]) != string::npos){
            bool is_consonant_left = true;
            for(int j = i-1; j >= 0; j--){
                if(!is_vowel(word[j])){
                    is_consonant_left = false;
                    break;
                }
            }
            if(is_consonant_left) return string(1, word[i]);
        }
    }
    return "";
}

bool is_vowel(char ch){
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}