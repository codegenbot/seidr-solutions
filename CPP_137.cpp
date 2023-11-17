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
#include<boost/any.h>
#include<boost/null_any.h>
using namespace std;
boost::any compare_one(boost::any a,boost::any b){
	if(a.type()==typeid(boost::null_any))
		return b;
	else if(b.type()==typeid(boost::null_any))
		return a;
	else
	if(a.type()==typeid(int))
	{
		if(b.type()==typeid(int))
		{
			if(boost::any_cast<int>(a)>boost::any_cast<int>(b))
				return a;
			else if(boost::any_cast<int>(a)<boost::any_cast<int>(b))
				return b;
			else
				return "None";
		}
		else if(b.type()==typeid(float))
		{
			if(boost::any_cast<int>(a)>boost::any_cast<float>(b))
				return a;
			else if(boost::any_cast<int>(a)<boost::any_cast<float>(b))
				return b;
			else
				return "None";
		}
		else if(b.type()==typeid(string))
		{
			if(boost::any_cast<int>(a)>stof(boost::any_cast<string>(b)))
				return a;
			else if(boost::any_cast<int>(a)<stof(boost::any_cast<string>(b)))
				return b;
			else
				return "None";
		}
	}
	else if(a.type()==typeid(float))
	{
		if(b.type()==typeid(int))
		{
			if(boost::any_cast<float>(a)>boost::any_cast<int>(b))
				return a;
			else if(boost::any_cast<float>(a)<boost::any_cast<int>(b))
				return b;
			else
				return "None";
		}
		else if(b.type()==typeid(float))
		{
			if(boost::any_cast<float>(a)>boost::any_cast<float>(b))
				return a;
			else if(boost::any_cast<float>(a)<boost::any_cast<float>(b))
				return b;
			else
				return "None";
		}
		else if(b.type()==typeid(string))
		{
			if(boost::any_cast<float>(a)>stof(boost::any_cast<string>(b)))
				return a;
			else if(boost::any_cast<float>(a)<stof(boost::any_cast<string>(b)))
				return b;
			else
				return "None";
		}
	}
	else if(a.type()==typeid(string))
	{
		if(b.type()==typeid(int))
		{
			if(stof(boost::any_cast<string>(a))>boost::any_cast<int>(b))
				return a;
			else if(stof(boost::any_cast<string>(a))<boost::any_cast<int>(b))
				return b;
			else
				return "None";
		}
		else if(b.type()==typeid(float))
		{
			if(stof(boost::any_cast<string>(a))>boost::any_cast<float>(b))
				return a;
			else if(stof(boost::any_cast<string>(a))<boost::any_cast<float>(b))
				return b;
			else
				return "None";
		}
		else if(b.type()==typeid(string))
		{
			if(stof(boost::any_cast<string>(a))>stof(boost::any_cast<string>(b)))
				return a;
			else if(stof(boost::any_cast<string>(a))<stof(boost::any_cast<string>(b)))
				return b;
			else
				return "None";
		}
	}
}
int main()
{
	boost::any a=1;
	boost::any b=2.5;
	boost::any c=compare_one(a,b);
	cout<<boost::any_cast<float>(c)<<endl;
	return 0;
}
