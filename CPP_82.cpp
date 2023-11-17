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
	int len = str.length();
	if(len==1 || len==0){return false;}
	else if(len==2 || len==3){return true;}
	else{
		for(int i=2;i<len/2;i++){
			if(len%i==0){return false;}
		}
	}
	return true;
}
int main(){
	string str;
	getline(cin,str);
	cout<<prime_length(str);
	return 0;
}
