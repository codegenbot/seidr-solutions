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
	
	if(txt[txt.length()-1]>='a'&&txt[txt.length()-1]<='z'||txt[txt.length()-1]>='A'&&txt[txt.length()-1]<='Z'){
		if(txt[txt.length()-2]==' '){
			return true;
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}
int main(){
	string str;
	printf("Enter a string : ");
	getline(cin,str);
	if(check_if_last_char_is_a_letter(str)==true){
		printf("True");
	}
	else{
		printf("False");
	}
	return 0;
}
