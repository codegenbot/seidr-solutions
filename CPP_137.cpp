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
    boost::any out;
    if(a.type() == typeid(float)){
        if(b.type() == typeid(float)){
            float x=boost::any_cast<float>(a);
            float y=boost::any_cast<float>(b);
            if(x<y)out=y;
            else if(x>y)out=x;
            else out="None";
        }
        else if(b.type()==typeid(int)){
            float x=boost::any_cast<float>(a);
            int y=boost::any_cast<int>(b);
            if(x<y)out=y;
            else if(x>y)out=x;
            else out="None";
        }
        else {
            float x=boost::any_cast<float>(a);
            string s=boost::any_cast<string>(b);
            string y=s.substr(0,s.find_first_of(","));
            int yy=stoi(y);
            if(x<yy)out=yy;
            else if(x>yy)out=x;
            else out="None";
        }
    }
    else if(a.type() == typeid(int)){
        if(b.type() == typeid(float)){
            int x=boost::any_cast<int>(a);
            float y=boost::any_cast<float>(b);
            if(x<y)out=y;
            else if(x>y)out=x;
            else out="None";
        }
        else if(b.type()==typeid(int)){
            int x=boost::any_cast<int>(a);
            int y=boost::any_cast<int>(b);
            if(x<y)out=y;
            else if(x>y)out=x;
            else out="None";
        }
        else {
            int x=boost::any_cast<int>(a);
            string s=boost::any_cast<string>(b);
            string y=s.substr(0,s.find_first_of(","));
            int yy=stoi(y);
            if(x<yy)out=yy;
            else if(x>yy)out=x;
            else out="None";
        }
    }
    else{
        if(b.type() == typeid(float)){
            string s=boost::any_cast<string>(a);
            string x=s.substr(0,s.find_first_of(","));
            int xx=stoi(x);
            float y=boost::any_cast<float>(b);
            if(xx<y)out=y;
            else if(xx>y)out=xx;
            else out="None";
        }
        else if(b.type()==typeid(int)){
            string s=boost::any_cast<string>(a);
            string x=s.substr(0,s.find_first_of(","));
            int xx=stoi(x);
            int y=boost::any_cast<int>(b);
            if(xx<y)out=y;
            else if(xx>y)out=xx;
            else out="None";
        }
        else {
            string s=boost::any_cast<string>(a);
            string x=s.substr(0,s.find_first_of(","));
            int xx=stoi(x);
            string s2=boost::any_cast<string>(b);
            string y=s2.substr(0,s2.find_first_of(","));
            int yy=stoi(y);
            if(xx<yy)out=y;
            else if(xx>yy)out=x;
            else out="None";
        }
    }
    float check=boost::any_cast<float>(a);
    return out;
}
