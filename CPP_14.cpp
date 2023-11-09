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
vector<string> res;
if(str.length()==0) return res;
int i=0;
while(i<str.length()){
	res.push_back(str.substr(0,i+1));
	i++;
}
return res;
}
