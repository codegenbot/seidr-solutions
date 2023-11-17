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
	string max=strings[0];
	for(int i=1;i<strings.size();i++){
		if(strings[i].length()>max.length())
			max=strings[i];
	}
	return max;
}
int main(){
	vector<string> a;
	a.push_back("a");
	a.push_back("bb");
	a.push_back("ccc");
	printf("%s\n",longest(a).c_str());
}
