/*
You are given a vector of two strings, both strings consist of open
parentheses '(' or close parentheses ')' only.
Your job is to check if it is possible to concatenate the two strings in
some order, that the resulting string will be good.
A string S is considered to be good if and only if all parentheses in S
are balanced. For example: the string "(())()" is good, while the string
"())" is not.
Return "Yes" if there's a way to make a good string, and return "No" otherwise.

Examples:
match_parens({"()(", ")"}) == "Yes"
match_parens({")", ")"}) == "No"
*/
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
string match_parens(vector<string> lst){
  string s1 = lst[0] + lst[1];
  int count = 0;
  for(int i = 0; i < s1.length(); i++) {
    if(s1[i] == '(') {
      count++;
    } else {
      count--;
    }
    if(count < 0) {
      return "No";
    }
  }
  if(count == 0) {
    return "Yes";
  } else {
    return "No";
  }
}
