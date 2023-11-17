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
#include<stdio.h>
#include<string.h>
using namespace std;
bool prime_length(char str[]){
	int len=strlen(str);
	for(int i=2;i<len;i++){
		if(len%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	char str[100];
	scanf("%s",&str);
	printf("%d",prime_length(str));
	return 0;
}
