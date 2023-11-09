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
	int i,j,k;
	string a;
	vector<string>result;
	for(i=0;i<s.size();i++){
		for(j=0;j<c.size();j++){
			if(s[i]==c[j]){
				s.erase(i,1);
				i--;
				break;
			}
		}
	}
	for(i=0;i<s.size();i++){
		a[i]=s[s.size()-1-i];
	}
	if(s==a)result.push_back(s);
	else result.push_back(s);
	if(s==a)result.push_back("True");
	else result.push_back("False");
	return result;
}
