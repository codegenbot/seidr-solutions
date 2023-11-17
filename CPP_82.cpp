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
bool prime_length(char str[]){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	if(i==2 || i==3 || i==5 || i==7){
		return true;
	}
	return false;
}
int main(){
	char str[100];
	scanf("%s",&str);
	if(prime_length(str)){
		printf("true");
	}
	else{
		printf("false");
	}
	return 0;
}
