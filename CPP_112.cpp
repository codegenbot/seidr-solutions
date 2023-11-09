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
    for(int i=0;i<c.length();i++){
        s.erase(remove(s.begin(),s.end(),c[i]),s.end());
    }
    string t=s;
    reverse(t.begin(),t.end());
    if(s==t){
        vector<string> v;
        v.push_back(s);
        v.push_back("True");
        return v;
    }
    else{
        vector<string> v;
        v.push_back(s);
        v.push_back("False");
        return v;
    }
}
