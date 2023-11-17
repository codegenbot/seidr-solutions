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
	int len = str.length();
	if (len == 1 || len == 2)
		return true;
	for (int i = 2; i < len; i++)
		if (len % i == 0)
			return false;
	return true;
}
int main(){
	string str;
	cin >> str;
	if (prime_length(str))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}
