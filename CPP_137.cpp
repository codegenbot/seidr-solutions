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
	if(a.type()==b.type()){
		if(a==b)
			return "None";
		else if(a>b)
			return a;
		else
			return b;
	}
	else if(a.type()==typeid(string)){
		string s1=boost::any_cast<string>(a);
		string s2=boost::any_cast<string>(b);
		if(s1.find(",")==string::npos){
			s1.append(".0");
		}
		if(s2.find(",")==string::npos){
			s2.append(".0");
		}
		if(stod(s1)==stod(s2))
			return "None";
		else if(stod(s1)>stod(s2))
			return s1;
		else
			return s2;
	}
	else if(b.type()==typeid(string)){
		string s1=boost::any_cast<string>(a);
		string s2=boost::any_cast<string>(b);
		if(s1.find(",")==string::npos){
			s1.append(".0");
		}
		if(s2.find(",")==string::npos){
			s2.append(".0");
		}
		if(stod(s1)==stod(s2))
			return "None";
		else if(stod(s1)>stod(s2))
			return s1;
		else
			return s2;
	}
	else
		return "None";
}
