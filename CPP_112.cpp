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
	vector<string> res;
	string t;
	for(int i=0;i<s.size();i++){
		if(c.find(s[i])==string::npos)
			t+=s[i];
	}
	res.push_back(t);
	res.push_back(t==string(t.rbegin(),t.rend())?"True":"False");
	return res;
}
int main(){
	string s,c;
	cin>>s>>c;
	vector<string> res=reverse_delete(s,c);
	for(int i=0;i<res.size();i++)
		cout<<res[i]<<endl;
	return 0;
}
