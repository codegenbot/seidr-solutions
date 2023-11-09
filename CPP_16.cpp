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
	int count = 0;
	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j < i; j++) {
			if (str[i] == str[j]) {
				break;
			}
			else {
				count++;
			}
		}
	}
	return count;
}
