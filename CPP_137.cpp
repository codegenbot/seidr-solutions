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
	if(a.type()==typeid(int)){
		if(b.type()==typeid(int)){
			int x=boost::any_cast<int>(a);
			int y=boost::any_cast<int>(b);
			if(x>y){
				return x;
			}else if(y>x){
				return y;
			}else{
				return "None";
			}
		}else if(b.type()==typeid(float)){
			int x=boost::any_cast<int>(a);
			float y=boost::any_cast<float>(b);
			if(x>y){
				return x;
			}else if(y>x){
				return y;
			}else{
				return "None";
			}
		}else if(b.type()==typeid(string)){
			int x=boost::any_cast<int>(a);
			string y=boost::any_cast<string>(b);
			float y1=stof(y);
			if(x>y1){
				return x;
			}else if(y1>x){
				return y1;
			}else{
				return "None";
			}
		}
	}else if(a.type()==typeid(float)){
		if(b.type()==typeid(int)){
			float x=boost::any_cast<float>(a);
			int y=boost::any_cast<int>(b);
			if(x>y){
				return x;
			}else if(y>x){
				return y;
			}else{
				return "None";
			}
		}else if(b.type()==typeid(float)){
			float x=boost::any_cast<float>(a);
			float y=boost::any_cast<float>(b);
			if(x>y){
				return x;
			}else if(y>x){
				return y;
			}else{
				return "None";
			}
		}else if(b.type()==typeid(string)){
			float x=boost::any_cast<float>(a);
			string y=boost::any_cast<string>(b);
			float y1=stof(y);
			if(x>y1){
				return x;
			}else if(y1>x){
				return y1;
			}else{
				return "None";
			}
		}
	}else if(a.type()==typeid(string)){
		if(b.type()==typeid(int)){
			string x=boost::any_cast<string>(a);
			float x1=stof(x);
			int y=boost::any_cast<int>(b);
			if(x1>y){
				return x1;
			}else if(y>x1){
				return y;
			}else{
				return "None";
			}
		}else if(b.type()==typeid(float)){
			string x=boost::any_cast<string>(a);
			float x1=stof(x);
			float y=boost::any_cast<float>(b);
			if(x1>y){
				return x1;
			}else if(y>x1){
				return y;
			}else{
				return "None";
			}
		}else if(b.type()==typeid(string)){
			string x=boost::any_cast<string>(a);
			float x1=stof(x);
			string y=boost::any_cast<string>(b);
			float y1=stof(y);
			if(x1>y1){
				return x1;
			}else if(y1>x1){
				return y1;
			}else{
				return "None";
			}
		}
	}
}
int main(){
	boost::any a=1;
	boost::any b="1.2";
	boost::any c=compare_one(a,b);
	if(c.type()==typeid(int)){
		printf("%d",boost::any_cast<int>(c));
	}else if(c.type()==typeid(float)){
		printf("%f",boost::any_cast<float>(c));
	}else if(c.type()==typeid(string)){
		printf("%s",boost::any_cast<string>(c).c_str());
	}
	return 0;
}
