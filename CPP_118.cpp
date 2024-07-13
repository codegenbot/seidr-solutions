#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    for(int i = 0; i < word.size(); i++){
        if(vowels.find(word[i]) != string::npos && (i == 0 || !isvowel(word[i-1])) && (i == word.size() - 1 || !isvowel(word[i+1]))){
            return word.substr(i, 1);
        }
    }
    return "";
}

bool isvowel(char c){
    string vowels = "aeiouAEIOU";
    return vowels.find(c) != string::npos;
}