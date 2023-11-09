/*
Return vector of all prefixes from shortest to longest of the input string
>>> all_prefixes("abc")
{"a", "ab", "abc"}
*/
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
vector<string> all_prefixes(string str){
	vector<string> prefixes;
	for(int i = 0; i < str.length(); i++){
		prefixes.push_back(str.substr(0, i+1));
	}
	return prefixes;
}
