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
string compare_one(int a,int b){
		int c=a;
		int d=b;
		if(c>d){
			return c;
		}
		else if(d>c){
			return d;
		}
		else{
			return "None";
		}
}
string compare_one(float a,float b){
		float c=a;
		float d=b;
		if(c>d){
			return c;
		}
		else if(d>c){
			return d;
		}
		else{
			return "None";
		}
}
string compare_one(string a,string b){
		string c=a;
		string d=b;
		if(c>d){
			return c;
		}
		else if(d>c){
			return d;
		}
		else{
			return "None";
		}
}
int main(){
	printf("%s",compare_one("1",1).c_str());
}
