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
    if(a.type()==typeid(string))
    {
        a=stod(boost::any_cast<string>(a));
    }
    if(b.type()==typeid(string))
    {
        b=stod(boost::any_cast<string>(b));
    }
    if(a.type()==typeid(int))
    {
        a=boost::any_cast<int>(a);
    }
    if(b.type()==typeid(int))
    {
        b=boost::any_cast<int>(b);
    }
    if(a.type()==typeid(float))
    {
        a=boost::any_cast<float>(a);
    }
    if(b.type()==typeid(float))
    {
        b=boost::any_cast<float>(b);
    }
    if(a==b)
    {
        return "None";
    }
    else if(a>b)
    {
        return a;
    }
    else if(b>a)
    {
        return b;
    }
}
int main()
{
    boost::any a=1;
    boost::any b="2,3";
    boost::any c=compare_one(a,b);
    cout<<boost::any_cast<string>(c);
}
