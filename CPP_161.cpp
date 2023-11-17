/*
You are given a string s.
if s[i] is a letter, reverse its case from lower to upper or vise versa, 
otherwise keep it as it is.
If the string contains no letters, reverse the string.
The function should return the resulted string.
Examples
solve("1234") = "4321"
solve("ab") = "AB"
solve("#a@C") = "#A@c"
*/
#include<stdio.h>
#include<string>
using namespace std;
string solve(string s){
	for(int i=0;i<s.length();i++)
    {
    	if(s[i]>='a'&&s[i]<='z')
    	{
    		s[i] = s[i] - 32;
		}
		else if(s[i]>='A'&&s[i]<='Z')
    	{
    		s[i] = s[i] + 32;
		}
	}
	return s;
}
int main()
{
	string s;
	cin>>s;
	cout<<solve(s);
	return 0;
}
