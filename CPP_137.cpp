/*
Create a function that takes integers, floats, or strings representing
real numbers, and returns the larger variable in its given variable type.
Return "None" if the values are equal.
Note: If a real number is represented as a string, the floating point might be . or ,

compare_one(1, 2.5) ➞ 2.5
compare_one(1, "2,3") ➞ "2,3"
compare_one("5,1", "6") ➞ "6"
compare_one("1", 1) ➞ "None"
*/
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<iostream>
using namespace std;
string compare_one(string a,string b){
	if(a.size()==b.size()){
		if(a.compare(b)==0){
			return "None";
		}
		else{
			return a>b?a:b;
		}
	}
	else{
		return a.size()>b.size()?a:b;
	}
}
int main(){
	printf("%s\n",compare_one(to_string(1), to_string(2.5)).c_str());
	printf("%s\n",compare_one(to_string(1), "2,3").c_str());
	printf("%s\n",compare_one("5,1", "6").c_str());
	printf("%s\n",compare_one("1", to_string(1)).c_str());
	assert (boost::any_cast<string>(compare_one(string("1"), 1)) == "None");
	assert (compare_one(string("1"), 1.0) == "1.0");
	assert (compare_one(string("1"), "1.0") == "1.0");
	assert (compare_one(string("1"), "2,3") == "2,3");
	assert (compare_one(string("5,1"), "6") == "6");
	return 0;
}
