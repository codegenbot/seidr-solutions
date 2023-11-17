/*
Given a string representing a space separated lowercase letters, return a map
of the letter with the most repetition and containing the corresponding count.
If several letters have the same occurrence, return all of them.

Example:
histogram("a b c") == {{"a", 1}, {"b", 1}, {"c", 1}}
histogram("a b b a") == {{"a", 2}, {"b", 2}}
histogram("a b c a b") == {{"a", 2}, {"b", 2}}
histogram("b b b b a") == {{"b", 4}}
histogram("") == {}

*/
#include<stdio.h>
#include<string>
#include<map>
using namespace std;
map<char,int> histogram(string test){
	map<char,int> result;
	map<char,int>::iterator it;
	int max=0;
	for(int i=0;i<test.length();i++){
		if(test[i]!=' '){
			it=result.find(test[i]);
			if(it==result.end()){
				result.insert(pair<char,int>(test[i],1));
			}
			else{
				it->second++;
			}
		}
	}
	for(it=result.begin();it!=result.end();it++){
		if(it->second>max){
			max=it->second;
		}
	}
	for(it=result.begin();it!=result.end();it++){
		if(it->second!=max){
			result.erase(it);
		}
	}
	return result;
}
int main(){
	string test="a b c";
	map<char,int> result=histogram(test);
	map<char,int>::iterator it;
	for(it=result.begin();it!=result.end();it++){
		printf("%c %d\n",it->first,it->second);
	}
	return 0;
}
