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
	int i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	for(i=0;i<str.length();i++){
		if(str[i]=='['){
			for(j=i+1;j<str.length();j++){
				if(str[j]==']'){
					return true;
				}
			}
		}
	}
	return false;
}
int main(){
	printf("%d",is_nested("[[]]"));
	printf("%d",is_nested("[]]]]]]][[[[[]"));
	printf("%d",is_nested("[][]"));
	printf("%d",is_nested("[]"));
	printf("%d",is_nested("[[][]]"));
	printf("%d",is_nested("[[]][["));
}
