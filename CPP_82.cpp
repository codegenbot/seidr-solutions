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
#include<string>
using namespace std;
bool prime_length(string str){
	int i,j,count=0;
	for(i=2;i<str.length();i++){
		if(str.length()%i==0){
			count++;
		}
	}
	if(count==0){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	string str;
	printf("Enter the string: ");
	getline(cin,str);
	if(prime_length(str)){
		printf("True");
	}
	else{
		printf("False");
	}
	return 0;
}
