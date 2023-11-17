/*
Circular shift the digits of the integer x, shift the digits right by shift
and return the result as a string.
If shift > number of digits, return digits reversed.
>>> circular_shift(12, 1)
"21"
>>> circular_shift(12, 2)
"12"
*/
#include<stdio.h>
#include<string>
using namespace std;
string circular_shift(int x,int shift){
  if(x==0){
    return "0";
  }
  string s = to_string(x);
  string result = "";
  int n = s.length();
  if(shift>n){
    for(int i=n-1;i>=0;i--){
      result.push_back(s[i]);
    }
    return result;
  }
  for(int i=n-1;i>=n-shift;i--){
    result.push_back(s[i]);
  }
  for(int i=0;i<n-shift;i++){
    result.push_back(s[i]);
  }
  return result;
}
