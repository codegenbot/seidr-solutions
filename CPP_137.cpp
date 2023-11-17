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
#include<boost/any.hpp>//not support
using namespace std;
boost::any compare_one(boost::any a,boost::any b){
	if(a.type()==b.type()){
		if(a==b)return "None";
		else return max(a,b);
	}
	else if(a.type()==typeid(string)){
		string s1=boost::any_cast<string>(a);
		string s2=boost::any_cast<string>(b);
		s1.erase(remove(s1.begin(),s1.end(),','),s1.end());
		s2.erase(remove(s2.begin(),s2.end(),','),s2.end());
		if(stof(s1)==stof(s2))return "None";
		else return max(s1,s2);
	}
	else if(b.type()==typeid(string)){
		string s1=boost::any_cast<string>(a);
		string s2=boost::any_cast<string>(b);
		s1.erase(remove(s1.begin(),s1.end(),','),s1.end());
		s2.erase(remove(s2.begin(),s2.end(),','),s2.end());
		if(stof(s1)==stof(s2))return "None";
		else return max(s1,s2);
	}
	else return max(a,b);
}
int main(){
	printf("%s\n",compare_one(1, 2.5).c_str());
	printf("%s\n",compare_one(1, "2,3").c_str());
	printf("%s\n",compare_one("5,1", "6").c_str());
	printf("%s\n",compare_one("1", 1).c_str());
	return 0;
}
