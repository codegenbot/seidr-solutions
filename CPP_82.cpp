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
#include <ostream>
#include <iostream>
using namespace std;
bool prime_length(string str){
int len = str.length();
int j = 0;
for(int i = 2; i < len; i++){
if(len % i == 0){
j++;
}
}
if(j == 0){
return true;
}
else{
return false;
}
}
int main(){
string str;
getline(cin, str);
bool result = prime_length(str);
if(result == true){
cout << "True" << endl;
}
else{
cout << "False" << endl;
}
return 0;
}
