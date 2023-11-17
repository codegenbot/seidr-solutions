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
	if(n>m) return "-1";
	int count=0;
	double sum=0;
	for(int i=n;i<=m;i++){
		sum+=i;
		count++;
	}
	int rounded=(int)round(sum/count);
	string bin="";
	while(rounded>0){
		if(rounded%2==0){
			bin+="0";
		}
		else{
			bin+="1";
		}
		rounded/=2;
	}
	string ans="";
	for(int i=bin.length()-1;i>=0;i--){
		ans+=bin[i];
	}
	return ans;
}
