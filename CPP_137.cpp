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
using boost::any_cast;
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
	try {
		if (any_cast<int>(a) > any_cast<int>(b)) {
			return any_cast<int>(a);
		}
		if (any_cast<int>(a) < any_cast<int>(b)) {
			return any_cast<int>(b);
		}
	}
	catch (boost::bad_any_cast&) {
	}
	try {
		if (any_cast<double>(a) > any_cast<double>(b)) {
			return any_cast<double>(a);
		}
		if (any_cast<double>(a) < any_cast<double>(b)) {
			return any_cast<double>(b);
		}
	}
	catch (boost::bad_any_cast&) {
	}
	try {
		if (any_cast<string>(a) > any_cast<string>(b)) {
			return any_cast<string>(a);
		}
		if (any_cast<string>(a) < any_cast<string>(b)) {
			return any_cast<string>(b);
		}
	}
	catch (boost::bad_any_cast&) {
	}
	return 0;
}
void main() {
	boost::any a = 2;
	boost::any b = 4.0;
	cout << any_cast<double>(compare_one(a, b));
}
