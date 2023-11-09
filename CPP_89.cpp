/*
Create a function encrypt that takes a string as an argument and
returns a string encrypted with the alphabet being rotated. 
The alphabet should be rotated in a manner such that the letters 
shift down by two multiplied to two places.
For example:
encrypt("hi") returns "lm"
encrypt("asdfghjkl") returns "ewhjklnop"
encrypt("gf") returns "kj"
encrypt("et") returns "ix"
*/
#include<stdio.h>
#include<string>
using namespace std;
string encrypt(string s){
  int i,j;
  string temp=s;
  for(i=0;i<s.length();i++){
    temp[i]+=2*2;
    if(temp[i]>122){
      j=temp[i]-122;
      temp[i]=97+j-1;
    }
  }
  return temp;
}
