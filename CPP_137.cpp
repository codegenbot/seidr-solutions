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
    if(a==b)
      return "None";
    else if(a>b)
      return a;
    else
      return b;
  }
  else if(a.type()==typeid(string)){
    string s1=boost::any_cast<string>(a);
    string s2=boost::any_cast<string>(b);
    double d1=stod(s1);
    double d2=stod(s2);
    if(d1==d2)
      return "None";
    else if(d1>d2)
      return a;
    else
      return b;
  }
  else if(b.type()==typeid(string)){
    string s1=boost::any_cast<string>(a);
    string s2=boost::any_cast<string>(b);
    double d1=stod(s1);
    double d2=stod(s2);
    if(d1==d2)
      return "None";
    else if(d1>d2)
      return a;
    else
      return b;
  }
  else if(a.type()==typeid(int)){
    int i1=boost::any_cast<int>(a);
    double d1=boost::any_cast<double>(b);
    if(i1==d1)
      return "None";
    else if(i1>d1)
      return a;
    else
      return b;
  }
  else if(b.type()==typeid(int)){
    int i1=boost::any_cast<int>(b);
    double d1=boost::any_cast<double>(a);
    if(i1==d1)
      return "None";
    else if(i1>d1)
      return b;
    else
      return a;
  }
}
int main(){
  boost::any a=compare_one(1,2.5);
  boost::any b=compare_one(1,"2,3");
  boost::any c=compare_one("5,1","6");
  boost::any d=compare_one("1",1);
  if(a.type()==typeid(double))
    printf("%lf\n",boost::any_cast<double>(a));
  else
    printf("%s\n",boost::any_cast<string>(a).c_str());
  if(b.type()==typeid(double))
    printf("%lf\n",boost::any_cast<double>(b));
  else
    printf("%s\n",boost::any_cast<string>(b).c_str());
  if(c.type()==typeid(double))
    printf("%lf\n",boost::any_cast<double>(c));
  else
    printf("%s\n",boost::any_cast<string>(c).c_str());
  if(d.type()==typeid(double))
    printf("%lf\n",boost::any_cast<double>(d));
  else
    printf("%s\n",boost::any_cast<string>(d).c_str());
  return 0;
}
