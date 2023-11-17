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
    if(a.type() != b.type()){
        if(a.type() == typeid(int)){
            return b;
        }else if(a.type() == typeid(float)){
            return b;
        }else if(a.type() == typeid(string)){
            return b;
        }else if(b.type() == typeid(int)){
            return a;
        }else if(b.type() == typeid(float)){
            return a;
        }else if(b.type() == typeid(string)){
            return a;
        }
    }else{
        if(a.type() == typeid(int)){
            int a1 = boost::any_cast<int>(a);
            int b1 = boost::any_cast<int>(b);
            if(a1 > b1){
                return a;
            }else if(a1 < b1){
                return b;
            }
        }else if(a.type() == typeid(float)){
            float a1 = boost::any_cast<float>(a);
            float b1 = boost::any_cast<float>(b);
            if(a1 > b1){
                return a;
            }else if(a1 < b1){
                return b;
            }
        }else if(a.type() == typeid(string)){
            string a1 = boost::any_cast<string>(a);
            string b1 = boost::any_cast<string>(b);
            if(a1 > b1){
                return a;
            }else if(a1 < b1){
                return b;
            }
        }
    }
    return "None";
}
