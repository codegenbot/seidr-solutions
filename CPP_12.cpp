/*
Out of vector of strings, return the longest one. Return the first one in case of multiple
strings of the same length. Return None in case the input vector is empty.
>>> longest({})

>>> longest({"a", "b", "c"})
"a"
>>> longest({"a", "bb", "ccc"})
"ccc"
*/
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
string longest(vector<string> strings){
	if(strings.size()==0)
		return "None";
	string str=strings[0];
	for(int i=0;i<strings.size();i++){
		if(strings[i].size()>str.size())
			str=strings[i];
	}
	return str;
}

int main(){
	vector<string> str;
	str.push_back("a");
	str.push_back("b");
	str.push_back("c");
	str.push_back("bb");
	str.push_back("ccc");
	printf("%s",longest(str).c_str());
	return 0;
}
