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
	if(a.type()==typeid(string)&&b.type()==typeid(string)){
		string s1=boost::any_cast<string>(a);
		string s2=boost::any_cast<string>(b);
		if(s1.find(',')!=string::npos)
			s1.replace(s1.find(','),1,".");
		if(s2.find(',')!=string::npos)
			s2.replace(s2.find(','),1,".");
		if(stof(s1)>stof(s2))
			return a;
		else if(stof(s1)<stof(s2))
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(string)&&b.type()==typeid(int)){
		string s1=boost::any_cast<string>(a);
		int s2=boost::any_cast<int>(b);
		if(s1.find(',')!=string::npos)
			s1.replace(s1.find(','),1,".");
		if(stof(s1)>s2)
			return a;
		else if(stof(s1)<s2)
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(string)&&b.type()==typeid(float)){
		string s1=boost::any_cast<string>(a);
		float s2=boost::any_cast<float>(b);
		if(s1.find(',')!=string::npos)
			s1.replace(s1.find(','),1,".");
		if(stof(s1)>s2)
			return a;
		else if(stof(s1)<s2)
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(int)&&b.type()==typeid(string)){
		int s1=boost::any_cast<int>(a);
		string s2=boost::any_cast<string>(b);
		if(s2.find(',')!=string::npos)
			s2.replace(s2.find(','),1,".");
		if(s1>stof(s2))
			return a;
		else if(s1<stof(s2))
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(float)&&b.type()==typeid(string)){
		float s1=boost::any_cast<float>(a);
		string s2=boost::any_cast<string>(b);
		if(s2.find(',')!=string::npos)
			s2.replace(s2.find(','),1,".");
		if(s1>stof(s2))
			return a;
		else if(s1<stof(s2))
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(int)&&b.type()==typeid(float)){
		int s1=boost::any_cast<int>(a);
		float s2=boost::any_cast<float>(b);
		if(s1>s2)
			return a;
		else if(s1<s2)
			return b;
		else
			return "None";
	}
	else if(a.type()==typeid(float)&&b.type()==typeid(int)){
		float s1=boost::any_cast<float>(a);
		int s2=boost::any_cast<int>(b);
		if(s1>s2)
			return a;
		else if(s1<s2)
			return b;
		else
			return "None";
	}
	else
		return "None";
}
int main(){
	boost::any a=compare_one(1,2.5);
	if(a.type()==typeid(float))
		printf("%.1f\n",boost::any_cast<float>(a));
	else if(a.type()==typeid(string))
		printf("%s\n",boost::any_cast<string>(a).c_str());
	else
		printf("%d\n",boost::any_cast<int>(a));
	a=compare_one(1,"2,3");
	if(a.type()==typeid(float))
		printf("%.1f\n",boost::any_cast<float>(a));
	else if(a.type()==typeid(string))
		printf("%s\n",boost::any_cast<string>(a).c_str());
	else
		printf("%d\n",boost::any_cast<int>(a));
	a=compare_one("5,1","6");
	if(a.type()==typeid(float))
		printf("%.1f\n",boost::any_cast<float>(a));
	else if(a.type()==typeid(string))
		printf("%s\n",boost::any_cast<string>(a).c_str());
	else
		printf("%d\n",boost::any_cast<int>(a));
	a=compare_one("1",1);
	if(a.type()==typeid(float))
		printf("%.1f\n",boost::any_cast<float>(a));
	else if(a.type()==typeid(string))
		printf("%s\n",boost::any_cast<string>(a).c_str());
	else
		printf("%d\n",boost::any_cast<int>(a));
	return 0;
}
