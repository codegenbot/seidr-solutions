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
#include <iostream>
#include <string>
#include <any>
using namespace std;
boost::any compare_one(boost::any a, boost::any b){
  if(a.type() == typeid(string) && b.type() == typeid(string)){
    if(boost::any_cast<string>(a) == boost::any_cast<string>(b)){
      return "None";
    }
    else{
      return boost::any_cast<string>(a) > boost::any_cast<string>(b)?a:b;
    }
  }
  else{
    return boost::any_cast<string>(a).size() > boost::any_cast<string>(b).size()?a:b;
  }
}
int main(){
  assert (boost::any_cast<string>(compare_one(string("1"), 1)) == "None");
  assert (boost::any_cast<string>(compare_one(string("1"), 1)) == "None");
  assert (boost::any_cast<string>(compare_one(string("1"), 1)) == "None");
  assert (boost::any_cast<string>(compare_one(string("1"), 1)) == "None");
  return 0;
}
