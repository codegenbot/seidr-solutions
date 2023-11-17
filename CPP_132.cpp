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
	if(str.length() == 0){
		return false;
	}
	int count = 0;
	for(int i = 0; i < str.length(); i++){
		if(str[i] == '['){
			count++;
		}else if(str[i] == ']'){
			count--;
		}
		if(count == -1){
			return false;
		}
	}
	if(count == 0){
		return false;
	}
	return true;
}
int main(){
	string str;
	cin >> str;
	if(is_nested(str)){
		cout << "true";
	}else{
		cout << "false";
	}
	return 0;
}
