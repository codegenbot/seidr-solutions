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
  float f1,f2;
  string s1,s2;
  if(a.type()==typeid(int) && b.type()==typeid(int)){
    if(boost::any_cast<int>(a)>boost::any_cast<int>(b)){
      return a;
    }
    else if(boost::any_cast<int>(a)<boost::any_cast<int>(b)){
      return b;
    }
    else{
      return "None";
    }
  }
  else if(a.type()==typeid(float) && b.type()==typeid(float)){
    if(boost::any_cast<float>(a)>boost::any_cast<float>(b)){
      return a;
    }
    else if(boost::any_cast<float>(a)<boost::any_cast<float>(b)){
      return b;
    }
    else{
      return "None";
    }
  }
  else if(a.type()==typeid(string) && b.type()==typeid(string)){
    if(boost::any_cast<string>(a)>boost::any_cast<string>(b)){
      return a;
    }
    else if(boost::any_cast<string>(a)<boost::any_cast<string>(b)){
      return b;
    }
    else{
      return "None";
    }
  }
  else if(a.type()==typeid(int) && b.type()==typeid(string)){
    s2=boost::any_cast<string>(b);
    f2=stof(s2);
    if(boost::any_cast<int>(a)>f2){
      return a;
    }
    else if(boost::any_cast<int>(a)<f2){
      return f2;
    }
    else{
      return "None";
    }
  }
  else if(a.type()==typeid(float) && b.type()==typeid(string)){
    s2=boost::any_cast<string>(b);
    f2=stof(s2);
    if(boost::any_cast<float>(a)>f2){
      return a;
    }
    else if(boost::any_cast<float>(a)<f2){
      return f2;
    }
    else{
      return "None";
    }
  }
  else if(a.type()==typeid(string) && b.type()==typeid(int)){
    s1=boost::any_cast<string>(a);
    f1=stof(s1);
    if(f1>boost::any_cast<int>(b)){
      return f1;
    }
    else if(f1<boost::any_cast<int>(b)){
      return b;
    }
    else{
      return "None";
    }
  }
  else if(a.type()==typeid(string) && b.type()==typeid(float)){
    s1=boost::any_cast<string>(a);
    f1=stof(s1);
    if(f1>boost::any_cast<float>(b)){
      return f1;
    }
    else if(f1<boost::any_cast<float>(b)){
      return b;
    }
    else{
      return "None";
    }
  }
  else if(a.type()==typeid(string) && b.type()==typeid(string)){
    if(boost::any_cast<string>(a)>boost::any_cast<string>(b)){
      return a;
    }
    else if(boost::any_cast<string>(a)<boost::any_cast<string>(b)){
      return b;
    }
    else{
      return "None";
    }
  }
  else{
    return "None";
  }
}
int main(){
  int a,b;
  float c,d;
  string e,f;
  cin>>a>>b;
  cin>>c>>d;
  cin>>e>>f;
  cout<<compare_one(a,b)<<endl;
  cout<<compare_one(c,d)<<endl;
  cout<<compare_one(e,f)<<endl;
  cout<<compare_one(a,c)<<endl;
  cout<<compare_one(b,d)<<endl;
  cout<<compare_one(a,e)<<endl;
  cout<<compare_one(b,f)<<endl;
  cout<<compare_one(c,e)<<endl;
  cout<<compare_one(d,f)<<endl;
  return 0;
}
