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
	int max_size=0;
	string max_string;
	for(int i=0; i<strings.size();i++){
		if(strings[i].size()>max_size){
			max_size=strings[i].size();
			max_string=strings[i];
		}
	}
	return max_string;
}
int main(){
	vector<string> strings;
	strings.push_back("a");
	strings.push_back("bb");
	strings.push_back("ccc");
	printf("%s\n", longest(strings).c_str());
	return 0;
}
