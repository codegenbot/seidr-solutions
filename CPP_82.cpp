/*
Write a function that takes a string and returns true if the string
length is a prime number or false otherwise
Examples
prime_length("Hello") == true
prime_length("abcdcba") == true
prime_length("kittens") == true
prime_length("orange") == false
*/
#include<stdio.h>
#include<iostream>
using namespace std;
bool prime_length(string str){
int i,j;
for(i=0;i<str.length();i++){
	for(j=2;j<str.length()/2;j++){
		if(str.length()%j==0)
		break;
	}
	if(str.length()==j)
	return true;
	else
	return false;
}
}
int main(){
	string str;
	cin>>str;
	bool x=prime_length(str);
	cout<<x;
}
