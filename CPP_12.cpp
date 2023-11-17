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
	int max=0;
	int index=0;
	for(int i=0;i<strings.size();i++){
		if(strings[i].size()>max){
			max=strings[i].size();
			index=i;
		}
	}
	return strings[index];
}
int main(){
	vector<string> strings;
	strings.push_back("a");
	strings.push_back("bb");
	strings.push_back("ccc");
	printf("%s\n",longest(strings).c_str());
	return 0;
}
