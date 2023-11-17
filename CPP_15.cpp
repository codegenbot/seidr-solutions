/*
Return a string containing space-delimited numbers starting from 0 upto n inclusive.
>>> string_sequence(0)
"0"
>>> string_sequence(5)
"0 1 2 3 4 5"
*/
#include<stdio.h>
#include<string>
using namespace std;
string string_sequence(int n){
string str;
for(int i=0;i<=n;i++){
str+=to_string(i);
str+=" ";
}
return str;
}
