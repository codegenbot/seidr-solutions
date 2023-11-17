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
string s1 = boost::any_cast<string>(a);
string s2 = boost::any_cast<string>(b);
if(s1.length() >= s2.length()){
return s1;
}else{
return s2;
}
int i1 = boost::any_cast<int>(a);
int i2 = boost::any_cast<int>(b);
if(i1 >= i2){
return a;
}else{
return b;
}
float f1 = boost::any_cast<float>(a);
float f2 = boost::any_cast<float>(b);
if(f1 >= f2){
return a;
}else{
return b;
}
}
int main(){
cout<<compare_one(1,2.5)<<endl;
cout<<compare_one(1,"2,3")<<endl;
cout<<compare_one("5,1","6")<<endl;
cout<<compare_one("1",1)<<endl;
}
