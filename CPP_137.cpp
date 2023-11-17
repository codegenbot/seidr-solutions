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
	if (a.type() == b.type()) {
		if (a.type() == typeid(int)) {
			if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) return a;
			if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) return b;
			return "None";
		}
		if (a.type() == typeid(float)) {
			if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) return a;
			if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) return b;
			return "None";
		}
		if (a.type() == typeid(string)) {
			if (boost::any_cast<string>(a).size() > boost::any_cast<string>(b).size()) return a;
			if (boost::any_cast<string>(a).size() < boost::any_cast<string>(b).size()) return b;
			return "None";
		}
	}
	if (a.type() == typeid(int) && b.type() == typeid(float)) {
		if (boost::any_cast<int>(a) < boost::any_cast<float>(b)) return b;
		return a;
	}
	if (b.type() == typeid(int) && a.type() == typeid(float)) {
		if (boost::any_cast<int>(b) < boost::any_cast<float>(a)) return a;
		return b;
	}
	if (a.type() == typeid(int) && b.type() == typeid(string)) {
		float var = stof(boost::any_cast<string>(b));
		if (boost::any_cast<int>(a) < var) return b;
		return a;
	}
	if (b.type() == typeid(int) && a.type() == typeid(string)) {
		float var = stof(boost::any_cast<string>(a));
		if (boost::any_cast<int>(b) < var) return a;
		return b;
	}
	if (a.type() == typeid(float) && b.type() == typeid(string)) {
		float var = stof(boost::any_cast<string>(b));
		if (boost::any_cast<float>(a) < var) return b;
		return a;
	}
	if (b.type() == typeid(float) && a.type() == typeid(string)) {
		float var = stof(boost::any_cast<string>(a));
		if (boost::any_cast<float>(b) < var) return a;
		return b;
	}
	if (a.type() == typeid(string) && b.type() == typeid(string)) {
		float var1 = stof(boost::any_cast<string>(a));
		float var2 = stof(boost::any_cast<string>(b));
		if (var1 > var2) return a;
		if (var1 < var2) return b;
		return "None";
	}
}
