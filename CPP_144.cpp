/*
Your task is to implement a function that will simplify the expression
x * n. The function returns true if x * n evaluates to a whole number and false
otherwise. Both x and n, are string representation of a fraction, and have the following format,
<numerator>/<denominator> where both numerator and denominator are positive whole numbers.

You can assume that x, and n are valid fractions, and do not have zero as denominator.

simplify("1/5", "5/1") = true
simplify("1/6", "2/1") = false
simplify("7/10", "10/2") = false
*/
#include<stdio.h>
#include<string>
using namespace std;
bool simplify(string x,string n){
	int a,b,c,d;
	string str1,str2;
	str1=x.substr(0,x.find('/'));
	str2=x.substr(x.find('/')+1);
	a=stoi(str1);
	b=stoi(str2);
	str1=n.substr(0,n.find('/'));
	str2=n.substr(n.find('/')+1);
	c=stoi(str1);
	d=stoi(str2);
	if((a*d)%(c*b)==0)
		return true;
	else
		return false;
}
int main(){
	string x,n;
	cin>>x>>n;
	cout<<simplify(x,n);
}
