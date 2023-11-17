/*
Concatenate vector of strings into a single string
>>> concatenate({})
""
>>> concatenate({"a", "b", "c"})
"abc"
*/
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
string concatenate(vector<string> strings){
	string result = "";
	for(int i = 0; i < strings.size(); i++){
		result += strings[i];
	}
	return result;
}
