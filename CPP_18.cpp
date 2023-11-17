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
	int n = str.length();
	int m = substring.length();
	for(int i = 0; i < n; i++){
		int j;
		for(j = 0; j < m; j++)
			if(str[i+j] != substring[j])
				break;
		if(j == m)
			count++;
	}
	return count;
}
