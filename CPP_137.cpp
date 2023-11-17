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
	if(a.type()==typeid(int) && b.type()==typeid(int)){
		if(boost::any_cast<int>(a)>boost::any_cast<int>(b))
			return a;
		else if(boost::any_cast<int>(a)<boost::any_cast<int>(b))
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(float) && b.type()==typeid(float)){
		if(boost::any_cast<float>(a)>boost::any_cast<float>(b))
			return a;
		else if(boost::any_cast<float>(a)<boost::any_cast<float>(b))
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(string) && b.type()==typeid(string)){
		string c=boost::any_cast<string>(a);
		string d=boost::any_cast<string>(b);
		float e=stof(c);
		float f=stof(d);
		if(e>f)
			return a;
		else if(e<f)
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(int) && b.type()==typeid(string)){
		string c=boost::any_cast<string>(b);
		float e=stof(c);
		if(boost::any_cast<int>(a)<e)
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(string) && b.type()==typeid(int)){
		string c=boost::any_cast<string>(a);
		float e=stof(c);
		if(e<boost::any_cast<int>(b))
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(float) && b.type()==typeid(string)){
		string c=boost::any_cast<string>(b);
		float e=stof(c);
		if(boost::any_cast<float>(a)<e)
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(string) && b.type()==typeid(float)){
		string c=boost::any_cast<string>(a);
		float e=stof(c);
		if(e<boost::any_cast<float>(b))
			return b;
		else
			return "None";
	}
	else
		return "None";
}
int main(){
	int a,b;
	float c,d;
	string e,f;
	cin>>a>>b;
	cin>>c>>d;
	cin>>e>>f;
	cout<<compare_one(a,b)<<endl;
	cout<<compare_one(c,d)<<endl;
	cout<<compare_one(e,f)<<endl;
	cout<<compare_one(a,f)<<endl;
	cout<<compare_one(e,b)<<endl;
	cout<<compare_one(c,f)<<endl;
	cout<<compare_one(e,d)<<endl;
}
