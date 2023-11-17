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
using namespace std;
string compare_one(int a, float b){
  return b > a?to_string(b):to_string(a);
}
string compare_one(int a, string b){
  return b > to_string(a)?b:to_string(a);
}
string compare_one(string a, string b){
  return a == b?"None":a > b?a:b;
}
string compare_one(string a, float b){
  return b > stof(a)?to_string(b):a;
}
string compare_one(float a, string b){
  return b > to_string(a)?b:to_string(a);
}
string compare_one(float a, float b){
  return b > a?to_string(b):to_string(a);
}
int main(){
  assert (compare_one(1, 2.5) == "2.5");
  assert (compare_one(1, "2,3") == "2,3");
  assert (compare_one("5,1", "6") == "6");
  assert (compare_one("1", 1) == "None");
  return 0;
}
