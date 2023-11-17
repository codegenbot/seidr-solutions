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
	int x1,x2; string y1,y2; float z1,z2;
 if(is_any_of<int>(a)&&is_any_of<int>(b)){
   if(any_cast<int>(a)<any_cast<int>(b))
   return b;
   else
   return a;
   
 }
if(is_any_of<string>(a)&&is_any_of<string>(b)){
  string s1,s2;
  s1=any_cast<string>(a);
  s2=any_cast<string>(b);
  if(stof(s1)<stof(s2))
  return b;
  else
  return a;
}
if(is_any_of<float>(a)&&is_any_of<float>(b)){
  if(any_cast<float>(a)<any_cast<float>(b)) return b;
  else return a;
}
if(is_any_of<string>(a)&&is_any_of<int>(b)){
  string s; float f;
  s=any_cast<string>(a);
  f=any_cast<int>(b);
  if(stof(s)<f) return b;
  else return a;
}
if(is_any_of<string>(b)&&is_any_of<int>(a)){
  string s; float f;
  s=any_cast<string>(b);
  f=any_cast<int>(a);
  if(stof(s)<f) return b;
  else return a;
}
if(is_any_of<float>(a)&&is_any_of<string>(b)){
  return b;
}
return "None";

}
int main(){
  cout<<compare_one(1, "2,3");
}
