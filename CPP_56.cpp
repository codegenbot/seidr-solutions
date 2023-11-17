/*
brackets is a string of '<' and '>'.
return true if every opening bracket has a corresponding closing bracket.

>>> correct_bracketing("<")
false
>>> correct_bracketing("<>")
true
>>> correct_bracketing("<<><>>")
true
>>> correct_bracketing("><<>")
false
*/
#include <ostream>
#include<string>
#include <iostream>
using namespace std;
bool correct_bracketing(string brackets){
	int count = 0;
	for(int i = 0; i < brackets.length(); i++){
		if(brackets[i] == '<'){
			count++;
		}
		else{
			count--;
		}
		if(count < 0){
			return false;
		}
	}
	if(count == 0){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	string str;
	cin >> str;
	if(correct_bracketing(str)){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	return 0;
}
