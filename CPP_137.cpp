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
	if (a.type() == typeid(int)){
		int temp = boost::any_cast<int>(a);
		if (b.type() == typeid(int)){
			int temp1 = boost::any_cast<int>(b);
			if (temp > temp1){
				return a;
			}
			else if (temp < temp1){
				return b;
			}
			else{
				return "None";
			}
		}
		else if (b.type() == typeid(float)){
			float temp1 = boost::any_cast<float>(b);
			if (temp > temp1){
				return a;
			}
			else if (temp < temp1){
				return b;
			}
			else{
				return "None";
			}
		}
		else if (b.type() == typeid(string)){
			string temp1 = boost::any_cast<string>(b);
			float temp2 = stof(temp1);
			if (temp > temp2){
				return a;
			}
			else if (temp < temp2){
				return b;
			}
			else{
				return "None";
			}
		}
	}
	else if (a.type() == typeid(float)){
		float temp = boost::any_cast<float>(a);
		if (b.type() == typeid(int)){
			int temp1 = boost::any_cast<int>(b);
			if (temp > temp1){
				return a;
			}
			else if (temp < temp1){
				return b;
			}
			else{
				return "None";
			}
		}
		else if (b.type() == typeid(float)){
			float temp1 = boost::any_cast<float>(b);
			if (temp > temp1){
				return a;
			}
			else if (temp < temp1){
				return b;
			}
			else{
				return "None";
			}
		}
		else if (b.type() == typeid(string)){
			string temp1 = boost::any_cast<string>(b);
			float temp2 = stof(temp1);
			if (temp > temp2){
				return a;
			}
			else if (temp < temp2){
				return b;
			}
			else{
				return "None";
			}
		}
	}
	else if (a.type() == typeid(string)){
		string temp = boost::any_cast<string>(a);
		float temp3 = stof(temp);
		if (b.type() == typeid(int)){
			int temp1 = boost::any_cast<int>(b);
			if (temp3 > temp1){
				return a;
			}
			else if (temp3 < temp1){
				return b;
			}
			else{
				return "None";
			}
		}
		else if (b.type() == typeid(float)){
			float temp1 = boost::any_cast<float>(b);
			if (temp3 > temp1){
				return a;
			}
			else if (temp3 < temp1){
				return b;
			}
			else{
				return "None";
			}
		}
		else if (b.type() == typeid(string)){
			string temp1 = boost::any_cast<string>(b);
			float temp2 = stof(temp1);
			if (temp3 > temp2){
				return a;
			}
			else if (temp3 < temp2){
				return b;
			}
			else{
				return "None";
			}
		}
	}
}
int main(){
	int a = 1;
	float b = 2.5;
	string c = "2,3";
	string d = "5,1";
	string e = "6";
	string f = "1";
	string g = "1";
	boost::any test1 = compare_one(a, b);
	boost::any test2 = compare_one(a, c);
	boost::any test3 = compare_one(d, e);
	boost::any test4 = compare_one(f, g);
	cout << boost::any_cast<float>(test1) << endl;
	cout << boost::any_cast<string>(test2) << endl;
	cout << boost::any_cast<string>(test3) << endl;
	cout << boost::any_cast<string>(test4) << endl;
	system("pause");
	return 0;
}
