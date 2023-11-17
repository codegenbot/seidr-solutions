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
boost::any result;
if(a.type()!=b.type())
 return boost::any();
else
 result = boost::any_cast<int>(a)>boost::any_cast<int>(b)?a:b;
 return result;
}
}
int main(){
int i =1;
float j=2.5;
printf("%s",boost::any_cast<string>(compare_one(i,j)).c_str());
}
