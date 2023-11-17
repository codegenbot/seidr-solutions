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
#include<boost/any.hpp> //부스트 라이브러리 설치해야함
using namespace std;
boost::any compare_one(boost::any a,boost::any b){
  if(a.type()==typeid(string)){
    if(b.type()==typeid(string)){
      string c=boost::any_cast<string>(a);
      string d=boost::any_cast<string>(b);
      if(c.length()>d.length())return c;
      else if(c.length()<d.length())return d;
      else return "None";
    }
    else if(b.type()==typeid(int)){
      string c=boost::any_cast<string>(a);
      int d=boost::any_cast<int>(b);
      if(c.length()>to_string(d).length())return c;
      else if(c.length()<to_string(d).length())return d;
      else return "None";
    }
    else if(b.type()==typeid(float)){
      string c=boost::any_cast<string>(a);
      float d=boost::any_cast<float>(b);
      if(c.length()>to_string(d).length())return c;
      else if(c.length()<to_string(d).length())return d;
      else return "None";
    }
  }
  else if(a.type()==typeid(int)){
    if(b.type()==typeid(string)){
      int c=boost::any_cast<int>(a);
      string d=boost::any_cast<string>(b);
      if(to_string(c).length()>d.length())return c;
      else if(to_string(c).length()<d.length())return d;
      else return "None";
    }
    else if(b.type()==typeid(int)){
      int c=boost::any_cast<int>(a);
      int d=boost::any_cast<int>(b);
      if(c>d)return c;
      else if(c<d)return d;
      else return "None";
    }
    else if(b.type()==typeid(float)){
      int c=boost::any_cast<int>(a);
      float d=boost::any_cast<float>(b);
      if(c>d)return c;
      else if(c<d)return d;
      else return "None";
    }
  }
  else if(a.type()==typeid(float)){
    if(b.type()==typeid(string)){
      float c=boost::any_cast<float>(a);
      string d=boost::any_cast<string>(b);
      if(to_string(c).length()>d.length())return c;
      else if(to_string(c).length()<d.length())return d;
      else return "None";
    }
    else if(b.type()==typeid(int)){
      float c=boost::any_cast<float>(a);
      int d=boost::any_cast<int>(b);
      if(c>d)return c;
      else if(c<d)return d;
      else return "None";
    }
    else if(b.type()==typeid(float)){
      float c=boost::any_cast<float>(a);
      float d=boost::any_cast<float>(b);
      if(c>d)return c;
      else if(c<d)return d;
      else return "None";
    }
  }
}
int main(){
  printf("%s\n",boost::any_cast<string>(compare_one("1",1)).c_str());
}
