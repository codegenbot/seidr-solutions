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

bool prime_length(string str) {
	int len = str.length();
	int i = 2;

	while (i <= len/2){
		if (len%i == 0)
			return false;
		i++;
	}
	return true;
}

int main() {
	printf("%d\n", prime_length("Hello"));
	printf("%d\n", prime_length("abcdcba"));
	printf("%d\n", prime_length("kittens"));
	printf("%d\n", prime_length("orange"));

	getchar();
	return 0;
}
