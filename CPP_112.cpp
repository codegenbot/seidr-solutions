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
	string s1="";
	for(int i=0;i<s.length();i++){
		if(c.find(s[i])==string::npos){
			s1+=s[i];
		}
	}
	string s2=s1;
	reverse(s2.begin(),s2.end());
	vector<string> v;
	v.push_back(s1);
	if(s1==s2){
		v.push_back("True");
	}
	else{
		v.push_back("False");
	}
	return v;
}
int main(){
	string s,c;
	cin>>s>>c;
	vector<string> v=reverse_delete(s,c);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
