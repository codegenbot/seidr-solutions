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
  string vowel = "aeiouAEIOU";
  int n = word.size();
  int i, j;
  for (i = n - 1; i >= 0; i--) {
    if (vowel.find(word[i]) != string::npos) {
      for (j = i - 1; j >= 0; j--) {
        if (vowel.find(word[j]) == string::npos) {
          return word[i];
        }
      }
      return "";
    }
  }
  return "";
}
