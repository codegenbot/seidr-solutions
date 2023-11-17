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
	int count = 0;
	int i = 0;
	while(i < str.length()){
		if(str.substr(i,substring.length()) == substring){
			count++;
			i += substring.length();
		}
		else{
			i++;
		}
	}
	return count;
}
int main(){
	string str = "";
	string substring = "a";
	printf("%d\n",how_many_times(str,substring));
	str = "aaa";
	substring = "a";
	printf("%d\n",how_many_times(str,substring));
	str = "aaaa";
	substring = "aa";
	printf("%d\n",how_many_times(str,substring));
	return 0;
}
