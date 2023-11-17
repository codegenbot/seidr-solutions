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
boost::any compare_one(const boost::any& a,const boost::any& b){
	if(a.empty()||b.empty()){
		return "none";
	}
	if(a.type()!=b.type()){
		  if(a.type()==typeid(float)){
			if (boost::any_cast<float>(a) > boost::any_cast<float>(b))
				return a;
		}
		if (b.type() == typeid(float))
			if (boost::any_cast<float>(a) < boost::any_cast<float>(b))
				return b;
		if (a.type() == typeid(double))
			if (boost::any_cast<double>(a) > boost::any_cast<double>(b))
				return a;
		if (b.type() == typeid(double))
			if (boost::any_cast<double>(a) < boost::any_cast<double>(b))
				return b;
		if (a.type() == typeid(int))
			if (boost::any_cast<int>(a) > boost::any_cast<int>(b))
				return a;
		if (b.type() == typeid(int))
			if (boost::any_cast<int>(a) < boost::any_cast<int>(b))
				return b;
		if (a.type() == typeid(std::string))
			if (boost::any_cast<std::string>(a) > boost::any_cast<std::string>(b))
				return a;
		if (b.type() == typeid(std::string))
			if (boost::any_cast<std::string>(a) < boost::any_cast<std::string>(b))
				return b;
		
	}
	if (boost::any_cast<float>(a) > boost::any_cast<float>(b))
		return a;
	if (boost::any_cast<float>(a) < boost::any_cast<float>(b))
		return b;
	if (a.type()==typeid(int) && b.type()==typeid(int))
		return "none";
	if (a.type() == typeid(float)) {
		if (b.type() == typeid(double))
			if (boost::any_cast<double>(a) < boost::any_cast<double>(b))
				return b;
	}
	if (boost::any_cast<double>(a) > boost::any_cast<double>(b))
		return a;
	if (boost::any_cast<double>(a) < boost::any_cast<double>(b))
		return b;
	if (a.type() == typeid(std::string))
		if (boost::any_cast<string>(a) > boost::any_cast<string>(b))
			return a;
	if (b.type() == typeid(std::string))
		if (boost::any_cast<string>(a) < boost::any_cast<string>(b))
			return b;
	return "none";
}
