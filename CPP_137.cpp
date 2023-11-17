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
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a,boost::any b){
	if(a.type()==typeid(string) && b.type()==typeid(string)){
		string a1=boost::any_cast<string>(a);
		string b1=boost::any_cast<string>(b);
	if(a.size()==b.size()){
		if(a1.compare(b1)==0){
			return string("None");
		}
		else{
			return a1>b1?a1:b1;
		}
	}
	else{
		return a1.size()>b1.size()?a1:b1;
	}
	}
	else if(a.type()==typeid(int) && b.type()==typeid(int)){
		int a1=boost::any_cast<int>(a);
		int b1=boost::any_cast<int>(b);
		if(a1==b1)return string("None");
		else return a1>b1?a1:b1;
	}
	else if(a.type()==typeid(float) && b.type()==typeid(float)){
		float a1=boost::any_cast<float>(a);
		float b1=boost::any_cast<float>(b);
		if(a1==b1)return string("None");
		else return a1>b1?a1:b1;
	}
	else if(a.type()==typeid(int) && b.type()==typeid(string)){
		int a1=boost::any_cast<int>(a);
		string b1=boost::any_cast<string>(b);
		return b1;
	}
	else if(a.type()==typeid(string) && b.type()==typeid(int)){
		string a1=boost::any_cast<string>(a);
		int b1=boost::any_cast<int>(b);
		return a1;
	}
	else if(a.type()==typeid(float) && b.type()==typeid(string)){
		float a1=boost::any_cast<float>(a);
		string b1=boost::any_cast<string>(b);
		return b1;
	}
	else if(a.type()==typeid(string) && b.type()==typeid(float)){
		string a1=boost::any_cast<string>(a);
		float b1=boost::any_cast<float>(b);
		return a1;
	}
	else if(a.type()==typeid(int) && b.type()==typeid(float)){
		int a1=boost::any_cast<int>(a);
		float b1=boost::any_cast<float>(b);
		return b1;
	}
	else if(a.type()==typeid(float) && b.type()==typeid(int)){
		float a1=boost::any_cast<float>(a);
		int b1=boost::any_cast<int>(b);
		return a1;
	}
}
int main(){
	assert (boost::any_cast<string>(compare_one(string("1"), 1)) == "None");
	assert (compare_one(string("1"), to_string(1.0)) == "1.0");
	assert (compare_one(string("1"), to_string("1.0")) == "1.0");
	assert (compare_one(string("1"), to_string("2,3")) == "2,3");
	assert (compare_one(string("5,1"), to_string("6")) == "6");
	return 0;
}
