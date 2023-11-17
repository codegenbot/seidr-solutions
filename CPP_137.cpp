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
string compare_one(double a,double b){
	if(a==b)
		return "None";
	else if(a>b)
		return to_string(a);
	else
		return to_string(b);
}
string compare_one(int a,int b){
	if(a==b)
		return "None";
	else if(a>b)
		return to_string(a);
	else
		return to_string(b);
}
string compare_one(string a,string b){
	if(a==b)
		return "None";
	else if(a>b)
		return a;
	else
		return b;
}
int main(){
	int a=1,b=2;
	double c=1.1,d=2.6;
	string e="2.2",f="2.1";
	printf("%s\n",compare_one(a,b).c_str());
	printf("%s\n",compare_one(c,d).c_str());
	printf("%s\n",compare_one(e,f).c_str());
	return 0;
}
