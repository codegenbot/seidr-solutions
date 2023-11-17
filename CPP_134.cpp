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
	int i = txt.length() - 1;
	if (txt.length() == 0) return false;
	while (txt[i] == ' ') {
		i--;
	}
	if (txt[i] >= 'a' && txt[i] <= 'z' || txt[i] >= 'A' && txt[i] <= 'Z') return true;
	else return false;
}

void main() {
	string txt1 = "apple pie";
	string txt2 = "apple pi e";
	string txt3 = "apple pi e ";
	string txt4 = "";
	bool res1 = check_if_last_char_is_a_letter(txt1);
	bool res2 = check_if_last_char_is_a_letter(txt2);
	bool res3 = check_if_last_char_is_a_letter(txt3);
	bool res4 = check_if_last_char_is_a_letter(txt4);
	printf("%d\n%d\n%d\n%d\n", res1, res2, res3, res4);
}
