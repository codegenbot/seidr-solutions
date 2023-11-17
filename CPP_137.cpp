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
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a,boost::any b){
	string aa=boost::any_cast<string>(a);
	string bb=boost::any_cast<string>(b);
	int aaa=boost::any_cast<int>(a);
	int bbb=boost::any_cast<int>(b);
	float aaaa=boost::any_cast<float>(a);
	float bbbb=boost::any_cast<float>(b);
	if(aa==bb){
		return "None";
	}
	else if(aaa==bbb){
		return "None";
	}
	else if(aaaa==bbbb){
		return "None";
	}
	else if(aa>bb){
		return a;
	}
	else if(aaa>bbb){
		return a;
	}
	else if(aaaa>bbbb){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	boost::any a,b;
	a=1;
	b="2,3";
	cout<<compare_one(a,b);
}
