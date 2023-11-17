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
  if(a.type()==b.type()){
    if(a==b){
      return "None";
    }
    else if(a>b){
      return a;
    }
    else{
      return b;
    }
  }
  else if(a.type()==typeid(string)){
    string a1=boost::any_cast<string>(a);
    float a2=stof(a1);
    float b2=boost::any_cast<float>(b);
    if(a2==b2){
      return "None";
    }
    else if(a2>b2){
      return a1;
    }
    else{
      return b2;
    }
  }
  else if(b.type()==typeid(string)){
    string b1=boost::any_cast<string>(b);
    float b2=stof(b1);
    float a2=boost::any_cast<float>(a);
    if(a2==b2){
      return "None";
    }
    else if(a2>b2){
      return a2;
    }
    else{
      return b1;
    }
  }
}
int main(){
  boost::any a,b;
  a="2,3";
  b=1;
  string c=boost::any_cast<string>(compare_one(a,b));
  cout<<c<<endl;
  return 0;
}
