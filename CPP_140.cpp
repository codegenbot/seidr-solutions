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
  int i = 0;
  while(i < text.size()){
    if(text[i] == ' '){
      text.erase(i,1);
      text.insert(i,"_");
      i++;
      while(i < text.size() && text[i] == ' '){
        text.erase(i,1);
        text.insert(i,"-");
        i++;
      }
    }
    else
      i++;
  }
  return text;
}
