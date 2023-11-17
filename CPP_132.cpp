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
	if(str.size()%2!=0){
		return false;
	}
	else{
		int n=str.size();
		for(int i=0;i<n/2;i++){
			if(str[i]!='[' || str[n-1-i]!=']'){
				return false;
			}
		}
		return true;
	}
}
int main(){
	printf("%d",is_nested("[[]]"));
}
