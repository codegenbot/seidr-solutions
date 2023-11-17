/*
Create a function that returns true if the last character
of a given string is an alphabetical character and is not
a part of a word, and false otherwise.
Note: "word" is a group of characters separated by space.

Examples:
check_if_last_char_is_a_letter("apple pie") ➞ false
check_if_last_char_is_a_letter("apple pi e") ➞ true
check_if_last_char_is_a_letter("apple pi e ") ➞ false
check_if_last_char_is_a_letter("") ➞ false 
*/
#include<stdio.h>
#include<string>
using namespace std;
bool check_if_last_char_is_a_letter(string txt){
int i=txt.length();
if(i==0)
return false;
else if(txt[i-1]>='a'&&txt[i-1]<='z'||txt[i-1]>='A'&&txt[i-1]<='Z')
return true;
else
return false;
}
int main(){
string s;
getline(cin,s);
if(check_if_last_char_is_a_letter(s))
printf("true");
else
printf("false");
return 0;
}
