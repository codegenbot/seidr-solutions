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
    char vowels[]={'a','e','i','o','u','A','E','I','O','U'};
    int len=word.length();
    int i,j;
    int flag=0;
    for(i=len-1;i>0;i--){
        for(j=0;j<10;j++){
            if(word[i]==vowels[j]){
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==0)
        return "";
    else{
        if(i==0)
            return "";
        else{
            if(word[i-1]=='a'||word[i-1]=='e'||word[i-1]=='i'||word[i-1]=='o'||word[i-1]=='u'||word[i-1]=='A'||word[i-1]=='E'||word[i-1]=='I'||word[i-1]=='O'||word[i-1]=='U')
                return "";
            else
                return word.substr(i,1);
        }
    }
}
