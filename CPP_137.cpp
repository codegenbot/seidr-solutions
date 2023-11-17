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
	if(a.type()==typeid(float) && b.type()==typeid(float)){
		if(boost::any_cast<float>(a)>boost::any_cast<float>(b))
			return a;
		else if(boost::any_cast<float>(a)<boost::any_cast<float>(b))
			return b;
		else
			return "None";
	}
	if(a.type()==typeid(string) && b.type()==typeid(string)){
		if(stof(boost::any_cast<string>(a))>stof(boost::any_cast<string>(b)))
			return a;
		else if(stof(boost::any_cast<string>(a))<stof(boost::any_cast<string>(b)))
			return b;
		else
			return "None";
	}
	if((a.type()==typeid(int) && b.type()==typeid(string)) || (a.type()==typeid(string) && b.type()==typeid(int))){
		if(a.type()==typeid(int)){
			if(boost::any_cast<int>(a)>stof(boost::any_cast<string>(b)))
				return a;
			else if(boost::any_cast<int>(a)<stof(boost::any_cast<string>(b)))
				return b;
			else
				return "None";
		}
		else{
			if(boost::any_cast<int>(b)>stof(boost::any_cast<string>(a)))
				return b;
			else if(boost::any_cast<int>(b)<stof(boost::any_cast<string>(a)))
				return a;
			else
				return "None";
		}
	}
	if((a.type()==typeid(string) && b.type()==typeid(float)) || (a.type()==typeid(float) && b.type()==typeid(string))){
		if(a.type()==typeid(string)){
			if(stof(boost::any_cast<string>(a))>boost::any_cast<float>(b))
				return a;
			else if(stof(boost::any_cast<string>(a))<boost::any_cast<float>(b))
				return b;
			else
				return "None";
		}
		else{
			if(stof(boost::any_cast<string>(b))>boost::any_cast<float>(a))
				return b;
			else if(stof(boost::any_cast<string>(b))<boost::any_cast<float>(a))
				return a;
			else
				return "None";
		}
	}
	if((a.type()==typeid(float) && b.type()==typeid(int)) || (a.type()==typeid(int) && b.type()==typeid(float))){
		if(a.type()==typeid(float)){
			if(boost::any_cast<float>(a)>boost::any_cast<int>(b))
				return a;
			else if(boost::any_cast<float>(a)<boost::any_cast<int>(b))
				return b;
			else
				return "None";
		}
		else{
			if(boost::any_cast<float>(b)>boost::any_cast<int>(a))
				return b;
			else if(boost::any_cast<float>(b)<boost::any_cast<int>(a))
				return a;
			else
				return "None";
		}
	}
}
int main(){
	boost::any a,b;
	int n;
	while(scanf("%d",&n)==1){
		if(n==1){
			int m;
			scanf("%d",&m);
			a=m;
		}
		else if(n==2){
			float m;
			scanf("%f",&m);
			a=m;
		}
		else if(n==3){
			string m;
			cin>>m;
			a=m;
		}
		else if(n==4){
			int m;
			scanf("%d",&m);
			b=m;
		}
		else if(n==5){
			float m;
			scanf("%f",&m);
			b=m;
		}
		else if(n==6){
			string m;
			cin>>m;
			b=m;
		}
		else if(n==7){
			break;
		}
	}
	boost::any ans=compare_one(a,b);
	if(ans.type()==typeid(int))
		printf("%d\n",boost::any_cast<int>(ans));
	else if(ans.type()==typeid(float))
		printf("%f\n",boost::any_cast<float>(ans));
	else if(ans.type()==typeid(string))
		cout<<boost::any_cast<string>(ans)<<endl;
	return 0;
}
