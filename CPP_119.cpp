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
	int f_count = 0, s_count = 0;
	// Complete the following code
    for (int i = 0; i < lst[0].length(); i++) {
        if (lst[0][i] == '(') f_count++;
        else f_count--;
        if (f_count < 0) return "No";
    }
    for (int i = 0; i < lst[1].length(); i++) {
        if (lst[1][i] == '(') s_count++;
        else s_count--;
        if (s_count > 0) return "No";
    }
    return f_count == s_count ? "Yes" : "No";
}
