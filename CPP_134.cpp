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
    return txt.size() > 0 && isalpha(txt[txt.size() - 1]) && (txt.size() == 1 || txt[txt.size() - 2] == ' ');
}
int main(){
    printf("%d",check_if_last_char_is_a_letter("apple pie"));
    printf("%d",check_if_last_char_is_a_letter("apple pi e"));
    printf("%d",check_if_last_char_is_a_letter("apple pi e "));
    printf("%d",check_if_last_char_is_a_letter(""));
}
