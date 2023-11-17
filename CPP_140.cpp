/*
Given a string text, replace all spaces in it with underscores, 
and if a string has more than 2 consecutive spaces, 
then replace all consecutive spaces with - 

fix_spaces("Example") == "Example"
fix_spaces("Example 1") == "Example_1"
fix_spaces(" Example 2") == "_Example_2"
fix_spaces(" Example   3") == "_Example-3"
*/
#include<stdio.h>
#include<string>
using namespace std;
string fix_spaces(string text){
  int len = text.size();
  for(int i = 0; i < len; i++){
    if(text[i] == ' '){
      text[i] = '_';
    }
  }
  for(int i = 0; i < len; i++){
    if(text[i] == '_' && text[i+1] == '_'){
      text[i] = '-';
    }
  }
  return text;
}


int main(){
  string s1 = "Example";
  string s2 = "Example 1";
  string s3 = " Example 2";
  string s4 = " Example   3";
  printf("%s\n", fix_spaces(s1).c_str());
  printf("%s\n", fix_spaces(s2).c_str());
  printf("%s\n", fix_spaces(s3).c_str());
  printf("%s\n", fix_spaces(s4).c_str());
}
