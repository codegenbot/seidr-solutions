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
	int i;
	string text1;
	for (i = 0; i < text.length(); i++) {
		if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U') {
			continue;
		}
		else {
			text1 += text[i];
		}
	}
	return text1;
}
int main() {
	string text;
	getline(cin, text);
	cout << remove_vowels(text) << endl;
	return 0;
}
