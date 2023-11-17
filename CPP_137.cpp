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
#include<boost/any.hpp> 
using namespace std;
boost::any compare_one(string a,string b){
	if(a.size()==b.size()){
		if(a.compare(b)==0){
			return boost::any("None");
		}
		else{
			return boost::any(a>b?a:b);
		}
	}
	else{
		return boost::any(a.size()>b.size()?a:b);
	}
}
int main(){
	assert (boost::any_cast<string>(compare_one(to_string(1), to_string(2.5))) == "2.5");
	assert (boost::any_cast<string>(compare_one(to_string(1), "2,3")) == "2,3");
	assert (boost::any_cast<string>(compare_one("5,1", "6")) == "6");
	assert (boost::any_cast<string>(compare_one(string("1"), 1)) == "None");
	return 0;
}
