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
	if(a.type()==typeid(int)&&b.type()==typeid(int)){
		if(boost::any_cast<int>(a)>boost::any_cast<int>(b))
			return a;
		else if(boost::any_cast<int>(a)<boost::any_cast<int>(b))
			return b;
	}
	else if(a.type()==typeid(float)&&b.type()==typeid(float)){
		if(boost::any_cast<float>(a)>boost::any_cast<float>(b))
			return a;
		else if(boost::any_cast<float>(a)<boost::any_cast<float>(b))
			return b;
	}
	else if(a.type()==typeid(string)&&b.type()==typeid(string)){
		if(boost::any_cast<string>(a)>boost::any_cast<string>(b))
			return a;
		else if(boost::any_cast<string>(a)<boost::any_cast<string>(b))
			return b;
	}
	else if(a.type()==typeid(string)&&b.type()==typeid(int)){
		if(stof(boost::any_cast<string>(a))>boost::any_cast<int>(b))
			return a;
		else if(stof(boost::any_cast<string>(a))<boost::any_cast<int>(b))
			return b;
	}
	else if(a.type()==typeid(string)&&b.type()==typeid(float)){
		if(stof(boost::any_cast<string>(a))>boost::any_cast<float>(b))
			return a;
		else if(stof(boost::any_cast<string>(a))<boost::any_cast<float>(b))
			return b;
	}
	else if(a.type()==typeid(int)&&b.type()==typeid(string)){
		if(boost::any_cast<int>(a)>stof(boost::any_cast<string>(b)))
			return a;
		else if(boost::any_cast<int>(a)<stof(boost::any_cast<string>(b)))
			return b;
	}
	else if(a.type()==typeid(float)&&b.type()==typeid(string)){
		if(boost::any_cast<float>(a)>stof(boost::any_cast<string>(b)))
			return a;
		else if(boost::any_cast<float>(a)<stof(boost::any_cast<string>(b)))
			return b;
	}
	return "None";
}
int main(){
	boost::any a(1);
	boost::any b(2.5);
	cout<<compare_one(a,b)<<endl;
	boost::any c(1);
	boost::any d("2,3");
	cout<<compare_one(c,d)<<endl;
	boost::any e("5,1");
	boost::any f("6");
	cout<<compare_one(e,f)<<endl;
	boost::any g("1");
	boost::any h(1);
	cout<<compare_one(g,h)<<endl;
	boost::any i("2.5");
	boost::any j("2.5");
	cout<<compare_one(i,j)<<endl;
}
