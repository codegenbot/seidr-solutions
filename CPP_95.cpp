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
	if(dict.empty())
		return false;
	bool upper = false;
	bool lower = false;
	for(auto it = dict.begin(); it != dict.end(); it++){
		if(isupper(it->first[0]))
			upper = true;
		else
			lower = true;
		if(upper && lower)
			return false;
	}
	return true;
}
int main(){
	map<string,string> dict;
	dict["a"] = "apple";
	dict["b"] = "banana";
	printf("%d\n",check_dict_case(dict));
	dict["A"] = "apple";
	printf("%d\n",check_dict_case(dict));
	dict["8"] = "apple";
	printf("%d\n",check_dict_case(dict));
	dict.clear();
	printf("%d\n",check_dict_case(dict));
	dict["STATE"] = "NC";
	dict["ZIP"] = "12345";
	printf("%d\n",check_dict_case(dict));
	return 0;
}
