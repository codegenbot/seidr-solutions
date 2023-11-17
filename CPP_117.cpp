/*
Given a string s and a natural number n, you have been tasked to implement 
a function that returns a vector of all words from string s that contain exactly 
n consonants, in order these words appear in the string s.
If the string s is empty then the function should return an empty vector.
Note: you may assume the input string contains only letters and spaces.
Examples:
select_words("Mary had a little lamb", 4) ==> {"little"}
select_words("Mary had a little lamb", 3) ==> {"Mary", "lamb"}
select_words('simple white space", 2) ==> {}
select_words("Hello world", 4) ==> {"world"}
select_words("Uncle sam", 3) ==> {"Uncle"}
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<string> select_words(string s,int n){
	vector<string> v;
	string temp;
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]!=' '){
			temp+=s[i];
		}
		else{
			for(int j=0;j<temp.length();j++){
				if(temp[j]=='a'||temp[j]=='e'||temp[j]=='i'||temp[j]=='o'||temp[j]=='u'){
					count++;
				}
			}
			if(temp.length()-count==n){
				v.push_back(temp);
			}
			temp="";
			count=0;
		}
	}
	for(int j=0;j<temp.length();j++){
		if(temp[j]=='a'||temp[j]=='e'||temp[j]=='i'||temp[j]=='o'||temp[j]=='u'){
			count++;
		}
	}
	if(temp.length()-count==n){
		v.push_back(temp);
	}
	return v;
}
int main(){
	string s;
	int n;
	getline(cin,s);
	cin>>n;
	vector<string> v=select_words(s,n);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
