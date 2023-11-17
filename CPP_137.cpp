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
	if (b.type() == typeid(string)) {
		string s = boost::any_cast<string>(b);
		if (s.find(',') != string::npos) {
			replace(s.begin(), s.end(), ',', '.');
			if(a.type()==typeid(int)){
				string c = to_string(boost::any_cast<int>(a));
				if(stof(c)<stof(s)){
					return s;
				}else if(stof(c)>stof(s)){
					return a;
				}
			}else if(a.type()==typeid(float)){
				float c = boost::any_cast<float>(a);
				if(c<stof(s)){
					return s;
				}else if(c>stof(s)){
					return a;
				}
			}else{
				return s;
			}
		}
	}
	if(a.type() == typeid(string)){
		string s = boost::any_cast<string>(a);
		if(s.find(',')!=string::npos){
			replace(s.begin(),s.end(),',','.');
			if(b.type()==typeid(int)){
				string c = to_string(boost::any_cast<int>(b));
				if(stof(c)<stof(s)){
					return s;
				}else if(stof(c)>stof(s)){
					return b;
				}
			}else if(b.type()==typeid(float)){
				float c = boost::any_cast<float>(b);
				if(c<stof(s)){
					return s;
				}else if(c>stof(s)){
					return b;
				}
			}else{
				return s;
			}
		}
	}
	if(a.type()==typeid(int)&&b.type()==typeid(int)){
		int c = boost::any_cast<int>(a);
		int d = boost::any_cast<int>(b);
		if(c<d){
			return d;
		}else if(c>d){
			return c;
		}
	}else if(a.type()==typeid(float)&&b.type()==typeid(float)){
		float c = boost::any_cast<float>(a);
		float d = boost::any_cast<float>(b);
		if(c<d){
			return d;
		}else if(c>d){
			return c;
		}
	}else if(a.type()==typeid(int)&&b.type()==typeid(float)){
		int c = boost::any_cast<int>(a);
		float d = boost::any_cast<float>(b);
		if(c<d){
			return d;
		}else if(c>d){
			return c;
		}
	}else if(a.type()==typeid(float)&&b.type()==typeid(int)){
		float c = boost::any_cast<float>(a);
		int d = boost::any_cast<int>(b);
		if(c<d){
			return d;
		}else if(c>d){
			return c;
		}
	}
	return "None";
}
int main(){
	printf("%s\n",boost::any_cast<const char*>(compare_one(1,"2,3")));
	printf("%s\n",boost::any_cast<const char*>(compare_one("5,1","6")));
	printf("%s\n",boost::any_cast<const char*>(compare_one("1",1)));
	return 0;
}
