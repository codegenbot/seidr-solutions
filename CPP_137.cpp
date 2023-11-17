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
#include<boost/any>
using namespace std;
boost::any compare_one(boost::any a,boost::any b){
  if(a.type()==typeid(int)&&b.type()==typeid(int)){
    return max(boost::any_cast<int>(a),boost::any_cast<int>(b));
  }
  if(a.type()==typeid(int)&&b.type()==typeid(float)){
    return max(boost::any_cast<float>(a),boost::any_cast<float>(b));
  }
  if(a.type()==typeid(int)&&b.type()==typeid(string)){
    return max(boost::any_cast<float>(a),boost::any_cast<float>(b));
  }
  if(a.type()==typeid(float)&&b.type()==typeid(int)){
    return max(boost::any_cast<float>(a),boost::any_cast<float>(b));
  }
  if(a.type()==typeid(float)&&b.type()==typeid(float)){
    return max(boost::any_cast<float>(a),boost::any_cast<float>(b));
  }
  if(a.type()==typeid(float)&&b.type()==typeid(string)){
    return max(boost::any_cast<float>(a),boost::any_cast<float>(b));
  }
  if(a.type()==typeid(string)&&b.type()==typeid(int)){
    return max(boost::any_cast<float>(a),boost::any_cast<float>(b));
  }
  if(a.type()==typeid(string)&&b.type()==typeid(float)){
    return max(boost::any_cast<float>(a),boost::any_cast<float>(b));
  }
  if(a.type()==typeid(string)&&b.type()==typeid(string)){
    return max(boost::any_cast<float>(a),boost::any_cast<float>(b));
  }
  else{
    return "None";
  }
}
int main(){
  cout<<compare_one(1,2.5)<<endl;
  cout<<compare_one(1,"2,3")<<endl;
  cout<<compare_one("5,1","6")<<endl;
  cout<<compare_one("1",1)<<endl;
}
