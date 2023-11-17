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
	vector<string> result;
	string temp;
	for(int i=0;i<s.size();i++){
		if(c.find(s[i])==string::npos){
			temp+=s[i];
		}
	}
	result.push_back(temp);
	string temp2=temp;
	reverse(temp2.begin(),temp2.end());
	if(temp==temp2){
		result.push_back("True");
	}
	else{
		result.push_back("False");
	}
	return result;
}
int main(){
	string s,c;
	cin>>s>>c;
	vector<string> result=reverse_delete(s,c);
	for(int i=0;i<result.size();i++){
		cout<<result[i]<<" ";
	}
	return 0;
}
