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
#include<string.h>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a,boost::any b){
	if(a.type()==typeid(int)&&b.type()==typeid(int)){
		if(boost::any_cast<int>(a)==boost::any_cast<int>(b)){
			return "None";
		}
		if(boost::any_cast<int>(a)>boost::any_cast<int>(b)){
			return a;
		}
		if(boost::any_cast<int>(a)<boost::any_cast<int>(b)){
			return b;
		}
	}
	if(a.type()==typeid(float)&&b.type()==typeid(float)){
		if(boost::any_cast<float>(a)==boost::any_cast<float>(b)){
			return "None";
		}
		if(boost::any_cast<float>(a)>boost::any_cast<float>(b)){
			return a;
		}
		if(boost::any_cast<float>(a)<boost::any_cast<float>(b)){
			return b;
		}
	}
	if(a.type()==typeid(string)&&b.type()==typeid(string)){
		int lena=boost::any_cast<string>(a).size();
		int lenb=boost::any_cast<string>(b).size();
		int counta=0,countb=0;
		for(int i=0;i<lena;i++){
			if(boost::any_cast<string>(a)[i]==','){
				counta++;
			}
			if(boost::any_cast<string>(a)[i]=='.'){
				counta++;
			}
		}
		for(int i=0;i<lenb;i++){
			if(boost::any_cast<string>(b)[i]==','||boost::any_cast<string>(b)[i]=='.'){
				countb++;
			}
		}
		if(counta==1&&countb==1){
			string temp1,temp2;
			temp1=boost::any_cast<string>(a);
			temp2=boost::any_cast<string>(b);
			replace(temp1.begin(),temp1.end(),',','.');
			replace(temp2.begin(),temp2.end(),',','.');
			if(atof(temp1.c_str())==atof(temp2.c_str())){
				return "None";
			}
			if(atof(temp1.c_str())>atof(temp2.c_str())){
				return a;
			}
			if(atof(temp1.c_str())<atof(temp2.c_str())){
				return b;
			}
		}
		if(counta==1&&countb==0){
			string temp;
			temp=boost::any_cast<string>(a);
			replace(temp.begin(),temp.end(),',','.');
			if(atof(temp.c_str())==boost::any_cast<int>(b)){
				return "None";
			}
			if(atof(temp.c_str())>boost::any_cast<int>(b)){
				return a;
			}
			if(atof(temp.c_str())<boost::any_cast<int>(b)){
				return b;
			}
		}
		if(counta==0&&countb==1){
			string temp;
			temp=boost::any_cast<string>(b);
			replace(temp.begin(),temp.end(),',','.');
			if(atof(temp.c_str())==boost::any_cast<int>(a)){
				return "None";
			}
			if(atof(temp.c_str())>boost::any_cast<int>(a)){
				return b;
			}
			if(atof(temp.c_str())<boost::any_cast<int>(a)){
				return a;
			}
		}
		if(counta==0&&countb==0){
			if(boost::any_cast<int>(a)>boost::any_cast<int>(b)){
				return a;
			}
			if(boost::any_cast<int>(a)<boost::any_cast<int>(b)){
				return b;
			}
			if(boost::any_cast<int>(a)==boost::any_cast<int>(b)){
				return "None";
			}
		}
	}
	if(a.type()==typeid(float)&&b.type()==typeid(string)){
		string temp;
		temp=boost::any_cast<string>(b);
		int len=temp.size();
		for(int i=0;i<len;i++){
			if(temp[i]==','||temp[i]=='.'){
				replace(temp.begin(),temp.end(),',','.');
				if(atof(temp.c_str())==boost::any_cast<float>(a)){
					return "None";
				}
				if(atof(temp.c_str())>boost::any_cast<float>(a)){
					return b;
				}
				if(atof(temp.c_str())<boost::any_cast<float>(a)){
					return a;
				}
			}
		}
		if(boost::any_cast<float>(a)==boost::any_cast<int>(b)){
			return "None";
		}
		if(boost::any_cast<float>(a)>boost::any_cast<int>(b)){
			return a;
		}
		if(boost::any_cast<float>(a)<boost::any_cast<int>(b)){
			return b;
		}
	}
}
int main(){
	float a=1.0;
	string b="2,3";
	cout<<compare_one(a,b).type().name()<<endl;
	return 0;
}
