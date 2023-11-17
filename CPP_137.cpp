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
if(a.type()==b.type() && a==b)
{
return "None";
}
else if(a.type()==typeid(int) && b.type()==typeid(float))
{
return b;
}
else if(a.type()==typeid(float) && b.type()==typeid(int))
{
return a;
}
else if(a.type()==typeid(string) && b.type()==typeid(float))
{
return b;
}
else if(a.type()==typeid(float) && b.type()==typeid(string))
{
return a;
}
else if(a.type()==typeid(string) && b.type()==typeid(int))
{
return b;
}
else if(a.type()==typeid(int) && b.type()==typeid(string))
{
return a;
}
else if(a.type()==typeid(string) && b.type()==typeid(string))
{
string s1=boost::any_cast<string>(a);
string s2=boost::any_cast<string>(b);
float f1=atof(s1.c_str());
float f2=atof(s2.c_str());
if(f1>f2)
{
return a;
}
else
{
return b;
}
}
}
int main()
{
boost::any a,b;
a=1;
b=2.5;
cout<<compare_one(a,b);
}
