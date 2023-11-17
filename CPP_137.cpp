/*
Create a function that takes integers, floats, or strings representing
real numbers, and returns the larger variable in its given variable type.
Return "None" if the values are equal.
Note: If a real number is represented as a string, the floating point might be . or ,


Complete the following code given the task description and function signature.

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
	try {
		if (a > b)
			return a;
		if (b > a)
			return b;
	}
	catch (boost::bad_any_cast &e)
	{
		return "None";
	}
}
int main()
{
	boost::any a(2.2);
	boost::any b("3,3");
	boost::any result = compare_one(a, b);
	if (result.type() == typeid(string))
	{
		string nam = boost::any_cast<string>(result);
		cout << nam;
	}
	return 0;
}
