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
  if(dynamic_cast<int>(a)){
    if(dynamic_cast<int>(b)){
      int a=boost::any_cast<int>(a);
      int b=boost::any_cast<int>(b);
      return a>b?a:b;
    }
    if(dynamic_cast<float>(b)){
      int a=boost::any_cast<int>(a);
      float b=boost::any_cast<float>(b);
      return a>b?a:b;
    }
    if(dynamic_cast<string>(b)){
      int a=boost::any_cast<int>(a);
      string b=boost::any_cast<string>(b);
      string b1=b.replace(b.find(","),1,".");
      float b2=stof(b1);
      return a>b2?a:b;
    }
  }
  if(dynamic_cast<float>(a)){
    if(dynamic_cast<int>(b)){
      float a=boost::any_cast<float>(a);
      int b=boost::any_cast<int>(b);
      return a>b?a:b;
    }
    if(dynamic_cast<float>(b)){
      float a=boost::any_cast<float>(a);
      float b=boost::any_cast<float>(b);
      return a>b?a:b;
    }
    if(dynamic_cast<string>(b)){
      float a=boost::any_cast<float>(a);
      string b=boost::any_cast<string>(b);
      string b1=b.replace(b.find(","),1,".");
      float b2=stof(b1);
      return a>b2?a:b;
    }
  }
  if(dynamic_cast<string>(a)){
    if(dynamic_cast<int>(b)){
      string a=boost::any_cast<string>(a);
      int b=boost::any_cast<int>(b);
      string a1=a.replace(a.find(","),1,".");
      float a2=stof(a1);
      return a2>b?a:b;
    }
    if(dynamic_cast<float>(b)){
      string a=boost::any_cast<string>(a);
      float b=boost::any_cast<float>(b);
      string a1=a.replace(a.find(","),1,".");
      float a2=stof(a1);
      return a2>b?a:b;
    }
    if(dynamic_cast<string>(b)){
      string a=boost::any_cast<string>(a);
      string b=boost::any_cast<string>(b);
      string a1=a.replace(a.find(","),1,".");
      string b1=b.replace(b.find(","),1,".");
      float a2=stof(a1);
      float b2=stof(b1);
      return a2>b2?a:b;
    }
  }
  return "None";
}

int main(){
  cout<<compare_one(1,2.5);
  return 0;
}
