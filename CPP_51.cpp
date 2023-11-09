/*
remove_vowels is a function that takes string and returns string without vowels.
>>> remove_vowels("")
""
>>> remove_vowels("abcdef\nghijklm")
"bcdf\nghjklm"
>>> remove_vowels("abcdef")
"bcdf"
>>> remove_vowels("aaaaa")
""
>>> remove_vowels("aaBAA")
"B"
>>> remove_vowels("zbcd")
"zbcd"
*/
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
string remove_vowels(string text){
  string ans="";
  for(int i=0;i<text.length();i++){
    if(tolower(text[i])!='a'&&tolower(text[i])!='e'&&tolower(text[i])!='i'&&tolower(text[i])!='o'&&tolower(text[i])!='u'){
      ans+=text[i];
    }
  }
  return ans;
}
