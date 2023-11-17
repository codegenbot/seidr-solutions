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
#include<boost/any.hpp>//
using namespace std;
boost::any compare_one(boost::any a,boost::any b){
	if (a.type() == typeid(int) && b.type() == typeid(float))
		return b;
	if (a.type() == typeid(float) && b.type() == typeid(int))
		return a;
	if (a.type() == typeid(int) && b.type() == typeid(int))
		return a > b ? a : b;
	if (a.type() == typeid(float) && b.type() == typeid(float))
		return a > b ? a : b;
	if (a.type() == typeid(string) && b.type() == typeid(string))
	{
		string aa = boost::any_cast<string>(a);
		string bb = boost::any_cast<string>(b);
		aa.erase(remove(aa.begin(), aa.end(), ','), aa.end());
		bb.erase(remove(bb.begin(), bb.end(), ','), bb.end());
		return stof(aa) > stof(bb) ? a : b;
	}
	return "None";
}
