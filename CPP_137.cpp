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
  if(a.type()==b.type())
  if(a==b) return "None";
  else if(a.type()==typeid(string))
  {
    string s1=boost::any_cast<string>(a);
    string s2=boost::any_cast<string>(b);
    string s3=s1+s2;
    float f=stof(s3);
    if(f>=stof(s1)&&f>=stof(s2))
    return f;
    else return "None";
  }
  else if(a.type()==typeid(float))
  {
    float f1=boost::any_cast<float>(a);
    float f2=boost::any_cast<float>(b);
    if(f1>=f2) return f1;
    else return f2;
  }
  else if(a.type()==typeid(int))
  {
    int i1=boost::any_cast<int>(a);
    int i2=boost::any_cast<int>(b);
    float f1=i1;
    float f2=i2;
    if(f1>=f2) return f1;
    else return f2;
  }
  else
  return "None";
}
int main()
{
  cout<<compare_one(1, "2,3")<<endl;
  cout<<compare_one("5,1", "6")<<endl;
  cout<<compare_one("1", 1)<<endl;
  cout<<compare_one(1, 2.5)<<endl;
}
