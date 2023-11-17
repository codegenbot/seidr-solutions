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
boost::any compare_one(boost::any a,boost::any b)
{
	if(a.type() == typeid(string))
	{
		string tmp = a.type();
		replace(tmp.begin(),tmp.end(),',','.');
		a = stod(tmp);
	}
	if(b.type() == typeid(string))
	{
		string tmp = b.type();
		replace(tmp.begin(),tmp.end(),',','.');
		b = stod(tmp);
	}
	if(a.type() == typeid(int))
	{
		a = stod(to_string(boost::any_cast<int>(a)));
	}
	if(b.type() == typeid(int))
	{
		b = stod(to_string(boost::any_cast<int>(b)));
	}
	if(boost::any_cast<double>(a) > boost::any_cast<double>(b))
	{
		return a;
	}
	else if(boost::any_cast<double>(a) < boost::any_cast<double>(b))
	{
		return b;
	}
	else
	{
		return "None";
	}
}
int main()
{
	boost::any a = "1,5";
	boost::any b = 6;
	cout << compare_one(a,b);
}
