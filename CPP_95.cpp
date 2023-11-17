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
bool check_dict_case(map<string,string> dict)
{
	map<string, string>::iterator it;
	int upper = 0, lower = 0;
	for (it = dict.begin(); it != dict.end(); it++)
	{
		if (it->first[0] >= 'a' && it->first[0] <= 'z')
			lower++;
		else if (it->first[0] >= 'A' && it->first[0] <= 'Z')
			upper++;
		else
			return false;
	}
	if (upper == 0 || lower == 0)
		return true;
	else
		return false;
}
int main()
{
	map<string, string> dict;
	dict.insert(pair<string, string>("a", "apple"));
	dict.insert(pair<string, string>("b", "banana"));
	dict.insert(pair<string, string>("A", "banana"));
	dict.insert(pair<string, string>("B", "banana"));
	dict.insert(pair<string, string>("8", "banana"));
	dict.insert(pair<string, string>("a", "apple"));
	dict.insert(pair<string, string>("Name", "John"));
	dict.insert(pair<string, string>("Age", "36"));
	dict.insert(pair<string, string>("City", "Houston"));
	dict.insert(pair<string, string>("STATE", "NC"));
	dict.insert(pair<string, string>("ZIP", "12345"));
	cout << check_dict_case(dict);
	return 0;
}
