#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    for(int i=word.length()-1; i>=0; i--){
        if(find(vowels.begin(), vowels.end(), tolower(word[i])) != vowels.end()){
            int left = 0;
            while(left < i && isalpha(word[left]) && !find(vowels.begin(), vowels.end(), tolower(word[left])) != vowels.end())
                left++;
            return word.substr(left, i-left+1);
        }
    }
    return "";
}