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
#include<string.h>
#include<boost/any.hpp>

boost::any compare_one(boost::any a,boost::any b)
{
	if(a.type()==typeid(int)  && b.type()==typeid(int) )
	{
		if(boost::any_cast<int>(a)>boost::any_cast<int>(b))
			return a;
		else
			return b;
	}
	
	else if(a.type()==typeid(double) && b.type()==typeid(double))
	{
		if(boost::any_cast<double>(a)>boost::any_cast<double>(b))
			return a;
		else
			return b;
	}
	else if(a.type()==typeid(float) && b.type()==typeid(float))
	{
		if(boost::any_cast<float>(a)>boost::any_cast<float>(b))
			return a;
		else
			return b;
	}
	else if(a.type()==typeid(string) && b.type()==typeid(string))
	{
		if(boost::any_cast<string>(a)>boost::any_cast<string>(b))
			return a;
		else
			return b;
	}
	return "None";
}
int main()
{
	printf("Output: %d\n",boost::any_cast<int>(compare_one(1,2.5)));
	printf("Output: %s\n",boost::any_cast<string>(compare_one(1,"2,3")).c_str());
	printf("Output: %s\n",boost::any_cast<string>(compare_one("5,1","6")).c_str());
	printf("Output: %s\n",boost::any_cast<string>(compare_one("1",1)).c_str());
}
