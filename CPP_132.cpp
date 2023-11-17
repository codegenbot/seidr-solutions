/*
Create a function that takes a string as input which contains only square brackets.
The function should return true if and only if there is a valid subsequence of brackets
where at least one bracket in the subsequence is nested.

is_nested("[[]]") ➞ true
is_nested("[]]]]]]][[[[[]") ➞ false
is_nested("[][]") ➞ false
is_nested("[]") ➞ false
is_nested("[[][]]") ➞ true
is_nested("[[]][[") ➞ true
*/
#include<stdio.h>
#include<string>
using namespace std;
bool is_nested(string str){
	int a = 0, b = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '[') {
			a++;
			if (a == b) {
				return true;
			}
		}
		else if (str[i] == ']') {
			b++;
		}
	}
	return false;
}
int main() {
	string str;
	getline(cin, str);
	printf("%d", is_nested(str));
}
