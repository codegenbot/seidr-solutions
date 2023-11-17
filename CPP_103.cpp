/*
You are given two positive integers n and m, and your task is to compute the
average of the integers from n through m (including n and m). 
Round the answer to the nearest integer(smaller one) and convert that to binary.
If n is greater than m, return "-1".
Example:
rounded_avg(1, 5) => "11"
rounded_avg(7, 5) => "-1"
rounded_avg(10, 20) => "1111"
rounded_avg(20, 33) => "11010"
*/
#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;
string rounded_avg(int n,int m){
	string s="";
	if(n>m){
		return "-1";
	}
	int avg=(n+m)/2;
	int i=0,j=0;
	while(avg>0){
		if(avg%2==0){
			s+="0";
			avg/=2;
		}
		else{
			s+="1";
			avg/=2;
		}
	}
	i=0;
	j=s.length()-1;
	char c;
	while(i<j){
		c=s[i];
		s[i]=s[j];
		s[j]=c;
		i++;
		j--;
	}
	return s;
}
int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	printf("%s",rounded_avg(n,m).c_str());
	return 0;
}
