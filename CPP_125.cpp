/*
Given a string of words, return a vector of words split on whitespace, if no whitespaces exists in the text you
should split on commas ',' if no commas exists you should return a vector with one element, the number of lower-case letters with odd order in the
alphabet, ord("a") = 0, ord("b") = 1, ... ord("z") = 25
Examples
split_words("Hello world!") ➞ {"Hello", "world!"}
split_words("Hello,world!") ➞ {"Hello", "world!"}
split_words("abcdef") == {"3"} 
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<string> split_words(string txt){
  vector<string>res;
  string temp;
  int count = 0;
  for(auto i : txt){
    if(i == ' ' || i == ','){
      res.push_back(temp);
      temp = "";
    }
    else{
      temp += i;
      if(i >= 'a' && i <= 'z' && (i - 'a') % 2 == 0)
        count++;
    }
  }
  if(temp != "")
    res.push_back(temp);
  if(res.size() == 0)
    res.push_back(to_string(count));
  return res;
}
int main(){
  string s = "abcdef";
  vector<string> res = split_words(s);
  for(auto i : res)
    printf("%s\n", i.c_str());
  return 0;
}
