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
    if(a.type()==typeid(string) && b.type()==typeid(string)){
        try{
            a=stod(boost::any_cast<string>(a));
            b=stod(boost::any_cast<string>(b));
        }catch(...){
            return "None";
        }
    }
    if(a.type()==typeid(int) && b.type()==typeid(int)){
        a=boost::any_cast<int>(a);
        b=boost::any_cast<int>(b);
    }
    if(a.type()==typeid(double) && b.type()==typeid(double)){
        a=boost::any_cast<double>(a);
        b=boost::any_cast<double>(b);
    }
    if(a.type()==typeid(int) && b.type()==typeid(double)){
        a=boost::any_cast<int>(a);
        b=boost::any_cast<double>(b);
    }
    if(a.type()==typeid(double) && b.type()==typeid(int)){
        a=boost::any_cast<double>(a);
        b=boost::any_cast<int>(b);
    }
    if(a.type()==typeid(int) && b.type()==typeid(string)){
        a=boost::any_cast<int>(a);
        b=boost::any_cast<string>(b);
    }
    if(a.type()==typeid(string) && b.type()==typeid(int)){
        a=boost::any_cast<string>(a);
        b=boost::any_cast<int>(b);
    }
    if(a.type()==typeid(double) && b.type()==typeid(string)){
        a=boost::any_cast<double>(a);
        b=boost::any_cast<string>(b);
    }
    if(a.type()==typeid(string) && b.type()==typeid(double)){
        a=boost::any_cast<string>(a);
        b=boost::any_cast<double>(b);
    }
    if(a.type()==typeid(string) && b.type()==typeid(string)){
        a=boost::any_cast<string>(a);
        b=boost::any_cast<string>(b);
    }
    if(a>b){
        return a;
    }
    else if(a<b){
        return b;
    }
    else{
        return "None";
    }
}
