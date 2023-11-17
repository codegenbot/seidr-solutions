/*
Task
We are given two strings s and c, you have to deleted all the characters in s that are equal to any character in c
then check if the result string is palindrome.
A string is called palindrome if it reads the same backward as forward.
You should return a vector containing the result string and "True"/"False" for the check.
Example
For s = "abcde", c = "ae", the result should be ("bcd","False")
For s = "abcdef", c = "b"  the result should be ("acdef","False")
For s = "abcdedcba", c = "ab", the result should be ("cdedc","True")
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<string> reverse_delete(string s,string c){
    for(int i=0;i<c.size();i++){
        for(int j=0;j<s.size();j++){
            if(c[i]==s[j]){
                s.erase(j,1);
                j--;
            }
        }
    }
    vector<string> res;
    string s1=s;
    reverse(s1.begin(),s1.end());
    if(s1==s){
        res.push_back(s);
        res.push_back("True");
    }
    else{
        res.push_back(s);
        res.push_back("False");
    }
    return res;
}
