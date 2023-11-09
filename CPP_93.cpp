/*
Write a function that takes a message, and encodes in such a 
way that it swaps case of all letters, replaces all vowels in 
the message with the letter that appears 2 places ahead of that 
vowel in the english alphabet. 
Assume only letters. 

Examples:
>>> encode('test")
"TGST"
>>> encode("This is a message")
'tHKS KS C MGSSCGG"
*/
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
string encode(string message){
	for (int i = 0; i < message.length(); i++){
		if (isupper(message[i])){
			message[i] = tolower(message[i]);
		}
		else if (islower(message[i])){
			message[i] = toupper(message[i]);
		}
		if (message[i] == 'a'){
			message[i] = 'c';
		}
		else if (message[i] == 'e'){
			message[i] = 'g';
		}
		else if (message[i] == 'i'){
			message[i] = 'k';
		}
		else if (message[i] == 'o'){
			message[i] = 'q';
		}
		else if (message[i] == 'u'){
			message[i] = 'y';
		}
		else if (message[i] == 'y'){
			message[i] = 'a';
		}
	}
	return message;
}
