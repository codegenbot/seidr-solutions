/*
Find how many times a given substring can be found in the original string. Count overlaping cases.
>>> how_many_times("", "a")
0
>>> how_many_times("aaa", "a")
3
>>> how_many_times("aaaa", "aa")
3
*/
#include<stdio.h>
#include<string>
using namespace std;
int how_many_times(string str,string substring){
	int count=0;
	for(int i=0;i<str.length();i++){
		if(str[i]==substring[0]){
			int j=0;
			while(j<substring.length() && str[i+j]==substring[j]){
				j++;
			}
			if(j==substring.length()){
				count++;
			}
		}
	}
	return count;
}
int main(){
	string str,substring;
	cin>>str>>substring;
	cout<<how_many_times(str,substring)<<endl;
	return 0;
}
