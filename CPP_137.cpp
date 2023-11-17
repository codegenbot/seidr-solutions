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
			if(boost::any_cast<int>(a)>boost::any_cast<int>(b))
				return a;
			else if(boost::any_cast<int>(a)==boost::any_cast<int>(b))
				return "None";
			else
				return b;
		}
		else if(b.type()==typeid(float)){
			if(boost::any_cast<int>(a)>boost::any_cast<float>(b))
				return a;
			else if(boost::any_cast<int>(a)==boost::any_cast<float>(b))
				return "None";
			else
				return b;
		}
		else if(b.type()==typeid(string)){
			if(boost::any_cast<int>(a)>stod(boost::any_cast<string>(b)))
				return a;
			else if(boost::any_cast<int>(a)==stod(boost::any_cast<string>(b)))
				return "None";
			else
				return b;
		}
	}
	else if(a.type()==typeid(float)){
		if(b.type()==typeid(int)){
			if(boost::any_cast<float>(a)>boost::any_cast<int>(b))
				return a;
			else if(boost::any_cast<float>(a)==boost::any_cast<int>(b))
				return "None";
			else
				return b;
		}
		else if(b.type()==typeid(float)){
			if(boost::any_cast<float>(a)>boost::any_cast<float>(b))
				return a;
			else if(boost::any_cast<float>(a)==boost::any_cast<float>(b))
				return "None";
			else
				return b;
		}
		else if(b.type()==typeid(string)){
			if(boost::any_cast<float>(a)>stod(boost::any_cast<string>(b)))
				return a;
			else if(boost::any_cast<float>(a)==stod(boost::any_cast<string>(b)))
				return "None";
			else
				return b;
		}
	}
	else if(a.type()==typeid(string)){
		if(b.type()==typeid(int)){
			if(stod(boost::any_cast<string>(a))>boost::any_cast<int>(b))
				return a;
			else if(stod(boost::any_cast<string>(a))==boost::any_cast<int>(b))
				return "None";
			else
				return b;
		}
		else if(b.type()==typeid(float)){
			if(stod(boost::any_cast<string>(a))>boost::any_cast<float>(b))
				return a;
			else if(stod(boost::any_cast<string>(a))==boost::any_cast<float>(b))
				return "None";
			else
				return b;
		}
		else if(b.type()==typeid(string)){
			if(stod(boost::any_cast<string>(a))>stod(boost::any_cast<string>(b)))
				return a;
			else if(stod(boost::any_cast<string>(a))==stod(boost::any_cast<string>(b)))
				return "None";
			else
				return b;
		}
	}
}
int main(){
	printf("%s\n",boost::any_cast<string>(compare_one(1, "2,3")).c_str());
	printf("%s\n",boost::any_cast<string>(compare_one("5,1", "6")).c_str());
	printf("%s\n",boost::any_cast<string>(compare_one("1", 1)).c_str());
	return 0;
}
