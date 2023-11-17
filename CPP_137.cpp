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
	if (a.type() != b.type()) 
		return "None";
	if (a.type() == typeid(int)) {
		if (boost::any_cast<int>(a) > boost::any_cast<int>(b))
			return a;
		else
			return b;
	}
	else if (a.type() == typeid(float)) {
		if (boost::any_cast<float>(a) > boost::any_cast<float>(b))
			return a;
		else
			return b;
	}
	else if (a.type() == typeid(string)) {
		string s1 = boost::any_cast<string>(a);
		string s2 = boost::any_cast<string>(b);
		s1.erase(std::remove(s1.begin(), s1.end(), ','), s1.end());
		s2.erase(std::remove(s2.begin(), s2.end(), ','), s2.end());
		if (stof(s1) > stof(s2))
			return a;
		else
			return b;
	}
}
int main() {
	cout << compare_one(1, 2.5) << endl;
	cout << compare_one(1, "2,3") << endl;
	cout << compare_one("5,1", "6") << endl;
	cout << compare_one("1", 1) << endl;
}
