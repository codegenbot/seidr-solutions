/*
Given a map, return true if all keys are strings in lower 
case or all keys are strings in upper case, else return false.
The function should return false is the given map is empty.
Examples:
check_map_case({{"a","apple"}, {"b","banana"}}) should return true.
check_map_case({{"a","apple"}, {"A","banana"}, {"B","banana"}}) should return false.
check_map_case({{"a","apple"}, {"8","banana"}, {"a","apple"}}) should return false.
check_map_case({{"Name","John"}, {"Age","36"}, {"City","Houston"}}) should return false.
check_map_case({{"STATE","NC"}, {"ZIP","12345"} }) should return true.
*/
#include<stdio.h>
#include<string>
#include<map>
using namespace std;
bool check_dict_case(map<string,string> dict){
	if(dict.size()==0)
		return false;
	bool upper=true;
	bool lower=true;
	for(auto it=dict.begin();it!=dict.end();it++){
		if(it->first[0]>='a'&&it->first[0]<='z')
			upper=false;
		else if(it->first[0]>='A'&&it->first[0]<='Z')
			lower=false;
		else
			return false;
	}
	return upper||lower;
}
int main(){
	map<string,string> dict;
	dict["a"]="apple";
	dict["b"]="banana";
	printf("%d\n",check_dict_case(dict));
	dict["A"]="apple";
	dict["B"]="banana";
	printf("%d\n",check_dict_case(dict));
	dict["8"]="apple";
	dict["a"]="banana";
	printf("%d\n",check_dict_case(dict));
	dict["Name"]="John";
	dict["Age"]="36";
	dict["City"]="Houston";
	printf("%d\n",check_dict_case(dict));
	dict["STATE"]="NC";
	dict["ZIP"]="12345";
	printf("%d\n",check_dict_case(dict));
	return 0;
}
