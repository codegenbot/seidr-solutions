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

    float val1,val2;
    if(b.type()==typeid(float) || b.type()==typeid(int)){
      return ( (!boost::any_cast<string>(a).find(',') ? \
      stof(boost::any_cast<string>(a)) : \
      stof(boost::any_cast<string>(a).substr(0,boost::any_cast<string>(a).size())+".0")) > \
      (float)boost::any_cast<float>(b) ? a : b);
    }
    else{
      val1 = boost::any_cast<float>(
      !boost::any_cast<string>(a).find(',') ? \
      stof(boost::any_cast<string>(a)) : \
      stof(boost::any_cast<string>(a).substr(0,boost::any_cast<string>(a).size())));
      val2 = (boost::any_cast<string>(b).find(',') ? \
      stof(boost::any_cast<string>(b)) : \
      stof(boost::any_cast<string>(b).substr(0,boost::any_cast<string>(a).size())));
      return (val1>val2)?a:b;
    }
  }
