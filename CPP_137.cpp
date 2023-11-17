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
	if(a.type()==typeid(int)&&(b.type()==typeid(float)||b.type()==typeid(string))){
		string s=any_cast<string>(b);
		replace(s.begin(),s.end(),',','.');
		return max(any_cast<int>(a),stof(s));
	}
	else if(a.type()==typeid(float)&&(b.type()==typeid(int)||b.type()==typeid(string))){
		string s=any_cast<string>(b);
		replace(s.begin(),s.end(),',','.');
		return max(any_cast<float>(a),stof(s));
	}
	else if(a.type()==typeid(string)&&(b.type()==typeid(int)||b.type()==typeid(float))){
		string s=any_cast<string>(a);
		replace(s.begin(),s.end(),',','.');
		return max(any_cast<string>(b),stof(s));
	}
	else if(a.type()==typeid(string)&&b.type()==typeid(string)){
		string s1=any_cast<string>(a);
		replace(s1.begin(),s1.end(),',','.');
		string s2=any_cast<string>(b);
		replace(s2.begin(),s2.end(),',','.');
		if(s1>s2)
		return s1;
		else
		return s2;
	}
	else if(any_cast<int>(a)==any_cast<int>(b))
	return "None";
	else if(any_cast<float>(a)==any_cast<float>(b))
	return "None";
	else if(any_cast<string>(a)==any_cast<string>(b))
	return "None";
	else
	return max(any_cast<int>(a),any_cast<int>(b));
}
