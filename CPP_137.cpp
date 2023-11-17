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
if(a.type()!=b.type()){
return "None";
}
if(a.type()==typeid(int)){
return boost::any_cast<int>(a)>boost::any_cast<int>(b)?a:b;
}
if(a.type()==typeid(float)){
return boost::any_cast<float>(a)>boost::any_cast<float>(b)?a:b;
}
if(a.type()==typeid(string)){
if(boost::any_cast<string>(a)[0]=='-'&&boost::any_cast<string>(b)[0]!='-'){
return b;
}
if(boost::any_cast<string>(a)[0]!='-'&&boost::any_cast<string>(b)[0]=='-'){
return a;
}
if(boost::any_cast<string>(a)[0]=='-'&&boost::any_cast<string>(b)[0]=='-'){
return boost::any_cast<string>(a).size()>boost::any_cast<string>(b).size()?b:a;
}
return boost::any_cast<string>(a).size()>boost::any_cast<string>(b).size()?a:b;
}
return "None";
}
int main(){
boost::any a=1;
boost::any b="2,3";
cout<<boost::any_cast<string>(compare_one(a,b));
return 0;
}
