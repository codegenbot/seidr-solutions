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
    if(txt.size()==0) return false;
    char last=txt.back();
    if(txt.size()==1) return isalpha(last);
    char second_last=txt[txt.size()-2];
    return isalpha(last) && !isalpha(second_last);
}
int main(){
    printf("%d\n",check_if_last_char_is_a_letter("apple pie"));
    printf("%d\n",check_if_last_char_is_a_letter("apple pi e"));
    printf("%d\n",check_if_last_char_is_a_letter("apple pi e "));
    printf("%d\n",check_if_last_char_is_a_letter(""));
    printf("%d\n",check_if_last_char_is_a_letter(" "));
    printf("%d\n",check_if_last_char_is_a_letter("a"));
    printf("%d\n",check_if_last_char_is_a_letter("a "));
    printf("%d\n",check_if_last_char_is_a_letter("1"));
    printf("%d\n",check_if_last_char_is_a_letter("1 "));
}
