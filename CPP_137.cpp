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
using namespace std;
string compare_one(ant a,ant b){
  if(typeid(a)==typeid(int)&&typeid(b)==typeid(int)){
    return to_string(max(a,b));
  }
  if(typeid(a)==typeid(int)&&typeid(b)==typeid(float)){
    return to_string(max(float(a),b));
  }
  if(typeid(a)==typeid(int)&&typeid(b)==typeid(string)){
    return to_string(max(float(a),stof(b)));
  }
  if(typeid(a)==typeid(float)&&typeid(b)==typeid(int)){
    return to_string(max(a,float(b)));
  }
  if(typeid(a)==typeid(float)&&typeid(b)==typeid(float)){
    return to_string(max(a,b));
  }
  if(typeid(a)==typeid(float)&&typeid(b)==typeid(string)){
    return to_string(max(a,stof(b)));
  }
  if(typeid(a)==typeid(string)&&typeid(b)==typeid(int)){
    return to_string(max(stof(a),float(b)));
  }
  if(typeid(a)==typeid(string)&&typeid(b)==typeid(float)){
    return to_string(max(stof(a),b));
  }
  if(typeid(a)==typeid(string)&&typeid(b)==typeid(string)){
    return to_string(max(stof(a),stof(b)));
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
