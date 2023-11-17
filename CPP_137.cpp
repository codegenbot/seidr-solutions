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
	if(a.type()==typeid(int)&&b.type()==typeid(float)){
		if(boost::any_cast<int>(a)<boost::any_cast<float>(b)){
			return b;
		}
		else if(boost::any_cast<int>(a)>boost::any_cast<float>(b)){
			return a;
		}
		else{
			return "None";
		}
	}
	else if(a.type()==typeid(float)&&b.type()==typeid(int)){
		if(boost::any_cast<float>(a)<boost::any_cast<int>(b)){
			return b;
		}
		else if(boost::any_cast<float>(a)>boost::any_cast<int>(b)){
			return a;
		}
		else{
			return "None";
		}
	}
	else if(a.type()==typeid(int)&&b.type()==typeid(string)){
		string s=boost::any_cast<string>(b);
		replace(s.begin(),s.end(),',','.');
		float f=stof(s);
		if(boost::any_cast<int>(a)<f){
			return b;
		}
		else if(boost::any_cast<int>(a)>f){
			return a;
		}
		else{
			return "None";
		}
	}
	else if(a.type()==typeid(string)&&b.type()==typeid(int)){
		string s=boost::any_cast<string>(a);
		replace(s.begin(),s.end(),',','.');
		float f=stof(s);
		if(f<boost::any_cast<int>(b)){
			return b;
		}
		else if(f>boost::any_cast<int>(b)){
			return a;
		}
		else{
			return "None";
		}
	}
	else if(a.type()==typeid(float)&&b.type()==typeid(string)){
		string s=boost::any_cast<string>(b);
		replace(s.begin(),s.end(),',','.');
		float f=stof(s);
		if(boost::any_cast<float>(a)<f){
			return b;
		}
		else if(boost::any_cast<float>(a)>f){
			return a;
		}
		else{
			return "None";
		}
	}
	else if(a.type()==typeid(string)&&b.type()==typeid(float)){
		string s=boost::any_cast<string>(a);
		replace(s.begin(),s.end(),',','.');
		float f=stof(s);
		if(f<boost::any_cast<float>(b)){
			return b;
		}
		else if(f>boost::any_cast<float>(b)){
			return a;
		}
		else{
			return "None";
		}
	}
	else if(a.type()==typeid(string)&&b.type()==typeid(string)){
		string s1=boost::any_cast<string>(a);
		string s2=boost::any_cast<string>(b);
		replace(s1.begin(),s1.end(),',','.');
		replace(s2.begin(),s2.end(),',','.');
		float f1=stof(s1);
		float f2=stof(s2);
		if(f1<f2){
			return b;
		}
		else if(f1>f2){
			return a;
		}
		else{
			return "None";
		}
	}
	else{
		return "None";
	}
}
int main(){
	boost::any a=compare_one(1,2.5);
	boost::any b=compare_one(1,"2,3");
	boost::any c=compare_one("5,1","6");
	boost::any d=compare_one("1",1);
	boost::any e=compare_one("2,3",2.5);
	boost::any f=compare_one(2.5,"2,3");
	boost::any g=compare_one("2,3","2.3");
	boost::any h=compare_one("2.3","2,3");
	boost::any i=compare_one("2.3","2.3");
	boost::any j=compare_one(2.3,"2.3");
	boost::any k=compare_one(2.3,2.3);
	boost::any l=compare_one(2.3,2.4);
	boost::any m=compare_one(2.4,2.3);
	boost::any n=compare_one(2,2);
	boost::any o=compare_one(2,"2");
	boost::any p=compare_one("2",2);
	boost::any q=compare_one("2","2");
	boost::any r=compare_one(2.3,2);
	boost::any s=compare_one(2,2.3);
	boost::any t=compare_one("2.3",2);
	boost::any u=compare_one(2,"2.3");
	boost::any v=compare_one("2.3","2.4");
	boost::any w=compare_one("2.4","2.3");
	boost::any x=compare_one("2.3","2.3");
	boost::any y=compare_one("2.3",2.3);
	boost::any z=compare_one(2.3,"2.3");
	cout<<boost::any_cast<float>(a)<<endl;
	cout<<boost::any_cast<string>(b)<<endl;
	cout<<boost::any_cast<string>(c)<<endl;
	cout<<boost::any_cast<string>(d)<<endl;
	cout<<boost::any_cast<float>(e)<<endl;
	cout<<boost::any_cast<float>(f)<<endl;
	cout<<boost::any_cast<string>(g)<<endl;
	cout<<boost::any_cast<string>(h)<<endl;
	cout<<boost::any_cast<string>(i)<<endl;
	cout<<boost::any_cast<float>(j)<<endl;
	cout<<boost::any_cast<string>(k)<<endl;
	cout<<boost::any_cast<float>(l)<<endl;
	cout<<boost::any_cast<float>(m)<<endl;
	cout<<boost::any_cast<string>(n)<<endl;
	cout<<boost::any_cast<int>(o)<<endl;
	cout<<boost::any_cast<int>(p)<<endl;
	cout<<boost::any_cast<string>(q)<<endl;
	cout<<boost::any_cast<float>(r)<<endl;
	cout<<boost::any_cast<
