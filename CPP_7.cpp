/*
Filter an input vector of strings only for ones that contain given substring
>>> filter_by_substring({}, "a")
{}
>>> filter_by_substring({"abc", "bacd", "cde", "vector"}, "a")
{"abc", "bacd", "vector"}
*/
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
vector<string> filter_by_substring(vector<string> strings, string substring){
	vector<string> result;
	for(int i=0; i<strings.size(); i++){
		if(strings[i].find(substring) != string::npos)
			result.push_back(strings[i]);
	}
	return result;
}
