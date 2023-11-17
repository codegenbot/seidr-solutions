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
	if(a.type()==typeid(int) && b.type()==typeid(int))
	{
		return boost::lexical_cast<int )>( b)<boost::get<int >(a))? boost::get<int >(a): boost::get<int >( b);
	}else if(a.type()==typeid(float) && b.type()==typeid(float))
	{
		return  (boost::get<float>(b)< boost::get<float>(a))? boost::get<float>(a):booset::get:<float>(b);
	}else if(a.type()==typeid(string) && b.type()==typeid(string)){
		string x=boost::lexical_cast<sring>(a);
		string z=boost::lexical_cast<sring>(b);
		replace(x.begin(),x.end(),',','.');
		replace(x.begin(),x.end(),',','.');
		return stof(x)<stof(z)? boost.get<string>(b) : boost::get<string>(a) : "none";
	}else{
		string x=boost::lexical_cast<sring>(a);
		replace(x.begin(),x.end(),',','.');
		return( boost::get<int > (a)<stof(x) ? b: boost::get<float>(a))?
	}
}
int main()
{
	cout<<compare_one(2,2)<<"\t"<<compare_one(3,2)<<endl;
	cout<<compare_one("45","35.5")<<"\t"<<compare_one("44","45.4")<<endl;
	cout<<compare_one("1","1.0")<<endl;
	return 0;
	
}
