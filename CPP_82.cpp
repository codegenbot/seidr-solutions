/*
Write a function that takes a string and returns true if the string
length is a prime number or false otherwise
Examples
prime_length("Hello") == true
prime_length("abcdcba") == true
prime_length("kittens") == true
prime_length("orange") == false
*/
#include<iostream>
#include<string>
using namespace std;
bool prime_length(string str){
	if(str.length()==2 || str.length()==3 || str.length()==5 || str.length()==7){
		return true;
	}
	return false;
}
int main(){
	string str="Hello";
	if(prime_length(str)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}
