/*
Given a string, find out how many distinct characters (regardless of case) does it consist of
>>> count_distinct_characters("xyzXYZ")
3
>>> count_distinct_characters("Jerry")
4
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int count_distinct_characters(string str){ 
	int size = str.size();
	vector<char> v;
	for (int i = 0; i < size; i++){
		if (find(v.begin(), v.end(), tolower(str[i])) == v.end()){
			v.push_back(tolower(str[i]));
		}
	}
	return v.size();
}
