/*
You are given a word. Your task is to find the closest vowel that stands between 
two consonants from the right side of the word (case sensitive).

Vowels in the beginning and ending doesn't count. Return empty string if you didn't
find any vowel met the above condition. 

You may assume that the given string contains English letter only.

Example:
get_closest_vowel("yogurt") ==> "u"
get_closest_vowel("FULL") ==> "U"
get_closest_vowel("quick") ==> ""
get_closest_vowel("ab") ==> ""
*/
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int i = word.size() - 1;
    while(i >= 0 && vowels.find(word[i]) == string::npos)
        i--;
    if(i < 1)
        return "";
    int j = i - 1;
    while(j >= 0 && vowels.find(word[j]) != string::npos)
        j--;
    if(j < 0)
        return "";
    return word.substr(j + 1, i - j);
}
int main(){
    printf("%s\n", get_closest_vowel("yogurt").c_str());
    printf("%s\n", get_closest_vowel("FULL").c_str());
    printf("%s\n", get_closest_vowel("quick").c_str());
    printf("%s\n", get_closest_vowel("ab").c_str());
    return 0;
}
