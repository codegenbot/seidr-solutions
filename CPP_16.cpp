/*
Given a string, find out how many distinct characters (regardless of case) does it consist of
>>> count_distinct_characters("xyzXYZ")
3
>>> count_distinct_characters("Jerry")
4
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int count_distinct_characters(string str){ 
	vector<char> char_list;
	for(int i = 0; i < str.length(); i++)
	{
		char_list.push_back(str[i]);
	}
	sort(char_list.begin(), char_list.end());
	int count = 0;
	for(int i = 0; i < char_list.size(); i++)
	{
		if(char_list[i] != char_list[i+1])
		{
			count++;
		}
	}
	return count;
}

int main(){
	printf("%d\n", count_distinct_characters("xyzXYZ"));
	printf("%d\n", count_distinct_characters("Jerry"));
	return 0;
}
