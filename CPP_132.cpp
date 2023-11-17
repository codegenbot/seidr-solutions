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
	bool flag=true;
	int i=0;
	while(i<str.length()){
		if(str[i]=='['){
			for(int j=i+1;j<str.length();j++){
				if(str[j]=='['){
					flag=false;
					break;
				}
				if(str[j]==']'){
					i=j+1;
					break;
				}
			}
		}
		else
			i++;
	}
	return flag;
}
int main(){
	string str;
	getline(cin,str);
	if(is_nested(str))
		cout<<"True";
	else
		cout<<"False";
}
