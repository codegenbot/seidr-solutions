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
    if(a.type() == typeid(int))
    {
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b))
            return a;
        else if(boost::any_cast<int>(a) < boost::any_cast<int>(b))
            return b;
        else
            return "None";
    }
    else if(a.type() == typeid(float))
    {
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b))
            return a;
        else if(boost::any_cast<float>(a) < boost::any_cast<float>(b))
            return b;
        else
            return "None";
    }
    else if(a.type() == typeid(string))
    {
        if(boost::any_cast<string>(a) > boost::any_cast<string>(b))
            return a;
        else if(boost::any_cast<string>(a) < boost::any_cast<string>(b))
            return b;
        else
            return "None";
    }
}
int main(){
    int a = 1;
    float b = 2.5;
    string c = "2,3";
    string d = "5.1";
    string e = "6";
    string f = "1";
    boost::any num1 = a;
    boost::any num2 = b;
    boost::any num3 = c;
    boost::any num4 = d;
    boost::any num5 = e;
    boost::any num6 = f;
    cout << compare_one(num1,num2).type().name() << endl;
    cout << compare_one(num1,num3).type().name() << endl;
    cout << compare_one(num4,num5).type().name() << endl;
    cout << compare_one(num6,num1).type().name() << endl;
    return 0;
}
