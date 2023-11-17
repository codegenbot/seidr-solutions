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
    if(a.type()==typeid(int) && b.type()==typeid(int)){
        if(boost::any_cast<int>(a)>boost::any_cast<int>(b)){
            return a;
        }
        else if(boost::any_cast<int>(a)<boost::any_cast<int>(b)){
            return b;
        }
    }
    else if(a.type()==typeid(float) && b.type()==typeid(float)){
        if(boost::any_cast<float>(a)>boost::any_cast<float>(b)){
            return a;
        }
        else if(boost::any_cast<float>(a)<boost::any_cast<float>(b)){
            return b;
        }
    }
    else if(a.type()==typeid(string) && b.type()==typeid(string)){
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        replace(str1.begin(),str1.end(),',','.');
        replace(str2.begin(),str2.end(),',','.');
        if(stof(str1)>stof(str2)){
            return a;
        }
        else if(stof(str1)<stof(str2)){
            return b;
        }
    }
    else if(a.type()==typeid(int) && b.type()==typeid(string)){
        string str1 = boost::any_cast<string>(b);
        replace(str1.begin(),str1.end(),',','.');
        if(boost::any_cast<int>(a)<stof(str1)){
            return b;
        }
    }
    else if(a.type()==typeid(string) && b.type()==typeid(int)){
        string str1 = boost::any_cast<string>(a);
        replace(str1.begin(),str1.end(),',','.');
        if(stof(str1)>boost::any_cast<int>(b)){
            return a;
        }
    }
    else if(a.type()==typeid(float) && b.type()==typeid(string)){
        string str1 = boost::any_cast<string>(b);
        replace(str1.begin(),str1.end(),',','.');
        if(boost::any_cast<float>(a)<stof(str1)){
            return b;
        }
    }
    else if(a.type()==typeid(string) && b.type()==typeid(float)){
        string str1 = boost::any_cast<string>(a);
        replace(str1.begin(),str1.end(),',','.');
        if(stof(str1)>boost::any_cast<float>(b)){
            return a;
        }
    }
    return "None";
}
