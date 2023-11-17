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
  if(a==b)
  return "None";
  if(a.type()==typeid(int))
  {
    int x=boost::any_cast<int>(a);
    if(b.type()==typeid(float))
    {
      float y=boost::any_cast<float>(b);
      if(y>x)
      return y;
    }
    else
    {
      string y=boost::any_cast<string>(b);
      if(stof(y)>x)
      return y;
    }
  }
  else if(a.type()==typeid(float))
  {
    float x=boost::any_cast<float>(a);
    if(b.type()==typeid(int))
    {
      int y=boost::any_cast<int>(b);
      if(x>y)
      return x;
    }
    else
    {
      string y=boost::any_cast<string>(b);
      if(stof(y)>x)
      return y;
    }
  }
  else if(a.type()==typeid(string))
  {
    string x=boost::any_cast<string>(a);
    if(b.type()==typeid(int))
    {
      int y=boost::any_cast<int>(b);
      if(stof(x)>y)
      return x;
    }
    else
    {
      float y=boost::any_cast<float>(b);
      if(stof(x)>y)
      return x;
    }
  }
}
int main(void)
{
  int a=5;
  int b=2;
  float c=2.5;
  float d=2.5;
  string e="2.5";
  cout<<compare_one(a,e)<<endl;
  cout<<compare_one(b,c)<<endl;
  cout<<compare_one(c,e)<<endl;
  cout<<compare_one(a,c)<<endl;
  cout<<compare_one(a,a)<<endl;
  return 0;
}
