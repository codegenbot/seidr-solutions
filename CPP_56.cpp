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
#include <iostream>
#include<string>
using namespace std;
bool correct_bracketing(string brackets){
	int count=0;
	for(int i=0;i<brackets.length();i++){
		if(brackets[i]=='>'){
			count--;
		}
		else{
			count++;
		}
		if(count<0){
			return false;
		}
	}
	if(count==0){
		return true;
	}
	else{
		return false;
	}
}
int main(){}
int main(){
	string s;
	cin>>s;
	bool result=correct_bracketing(s);
	cout<<result;
	return 0;
}
