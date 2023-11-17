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
	int avg;
	if(n>m) return "-1";
	avg=(n+m)/2;
	if(avg%2==0) avg=avg-1;
	string s="";
	while(avg>0){
		if(avg%2==1) s="1"+s;
		else s="0"+s;
		avg=avg/2;
	}
	return s;
}
