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
    int i;
    int count=0;
    int count1=0;
    int count2=0;
    for(i=0;i<lst[0].length();i++){
        if(lst[0][i]=='('){
            count++;
        }
        else{
            count--;
        }
        if(count<0){
            break;
        }
    }
    for(i=0;i<lst[1].length();i++){
        if(lst[1][i]=='('){
            count1++;
        }
        else{
            count1--;
        }
        if(count1<0){
            break;
        }
    }
    for(i=0;i<lst[0].length();i++){
        if(lst[0][i]=='('){
            count2++;
        }
        else{
            count2--;
        }
        if(count2<0){
            break;
        }
    }
    if(count>=0&&count1>=0&&count2>=0){
        return "Yes";
    }
    else{
        return "No";
    }
}
