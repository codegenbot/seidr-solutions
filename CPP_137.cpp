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
if(a.type()==b.type())
{
	if(a==b)
		return "None";
	else
	{
		if(a.type()==typeid(int))
		{
			if(boost::any_cast<int>(a)>boost::any_cast<int>(b))
				return boost::any_cast<int>(a);
			else
				return boost::any_cast<int>(b);
		}
		else if(a.type()==typeid(float))
		{
			if(boost::any_cast<float>(a)>boost::any_cast<float>(b))
				return boost::any_cast<float>(a);
			else
				return boost::any_cast<float>(b);
		}
		else
		{
			if(boost::any_cast<char>(a)>boost::any_cast<char>(b))
				return boost::any_cast<char>(a);
			else
				return boost::any_cast<char>(b);
		}
	}
}
else
{
	if(a.type()==typeid(int))
		a=boost::any_cast<float>(a);
	if(b.type()==typeid(int))
		b=boost::any_cast<float>(b);
	if(a.type()==typeid(string))
		a=boost::any_cast<float>(a);
	if(b.type()==typeid(string))
		b=boost::any_cast<float>(b);
	if(a.type()==typeid(float))
	{
		if(boost::any_cast<float>(a)>boost::any_cast<float>(b))
			return boost::any_cast<float>(a);
		else
			return boost::any_cast<float>(b);
	}
	else
	{
		if(boost::any_cast<float>(a)>boost::any_cast<float>(b))
			return boost::any_cast<float>(a);
		else
			return boost::any_cast<float>(b);
	}
}
}
int main(){
	string a,b;
	cin>>a>>b;
	boost::any x=boost::any_cast<int>(a);
	boost::any y=boost::any_cast<float>(b);
	cout<<compare_one(x,y);
	return 0;
}
