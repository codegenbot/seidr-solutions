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
	if(a.type()==b.type()){
		if(a==b) return string("None");
		else if(any_cast<int>(a)>any_cast<int>(b)) return a;
		else if(any_cast<float>(a)>any_cast<float>(b)) return a;
		else if(any_cast<string>(a)>any_cast<string>(b)) return a;
		else return b;
	}
	else if(a.type()==typeid(int)&&b.type()==typeid(float)){
		if(any_cast<int>(a)>any_cast<float>(b)) return a;
		else return b;
	}
	else if(a.type()==typeid(string)&&b.type()==typeid(int)){
		return compare_one(b,a);
	}
	else if(a.type()==typeid(float)&&b.type()==typeid(int)){
		return compare_one(b,a);
	}
	else if(a.type()==typeid(string)&&b.type()==typeid(float)){
		if(stof(any_cast<string>(a))>any_cast<float>(b)) return a;
		else return b;
	}
	else if(a.type()==typeid(float)&&b.type()==typeid(string)){
		return compare_one(b,a);
	}
	else if(a.type()==typeid(string)&&b.type()==typeid(string)){
		if(a==b) return string("None");
		else if(stof(any_cast<string>(a))>stof(any_cast<string>(b))) return a;
		else return b;
	}
}
int main(){
	printf("%s",boost::any_cast<string>(compare_one(1,2.5)).c_str());
	
}
