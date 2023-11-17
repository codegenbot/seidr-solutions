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
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <iostream>
#include <boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
	if (a.type() == typeid(int) && b.type() == typeid(int)) {
		if (boost::any_cast<int>(a) == boost::any_cast<int>(b)) {
			return "None";
		} else {
			return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : b;
		}
	} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
		if (boost::any_cast<float>(a) == boost::any_cast<float>(b)) {
			return "None";
		} else {
			return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
		}
	} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
		if (boost::any_cast<string>(a) == boost::any_cast<string>(b)) {
			return "None";
		} else {
			return boost::any_cast<string>(a).size() > boost::any_cast<string>(b).size() ? a : b;
		}
	}
}
int main() {
	printf("%s\n", boost::any_cast<string>(compare_one(1, 2.5)).c_str());
	printf("%s\n", boost::any_cast<string>(compare_one(1, "2,3")).c_str());
	printf("%s\n", boost::any_cast<string>(compare_one("5,1", "6")).c_str());
	printf("%s\n", boost::any_cast<string>(compare_one("1", 1)).c_str());
	assert (boost::any_cast<string>(compare_one(string("1"), 1)) == "None");
	assert (boost::any_cast<string>(compare_one(string("1"), 1.0)) == "1.0");
	assert (boost::any_cast<string>(compare_one(string("1"), 1.0)) == "1.0");
	assert (boost::any_cast<string>(compare_one(string("1"), "2,3")) == "2,3");
	assert (boost::any_cast<string>(compare_one(string("5,1"), "6")) == "6");
	return 0;
}
