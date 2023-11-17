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
	if (n > m)
	{
		return "-1";
	}
	else
	{
		int sum = 0;
		int count = 0;
		for (int i = n; i <= m; i++)
		{
			sum += i;
			count++;
		}
		int avg = sum / count;
		string s = "";
		while (avg > 0)
		{
			if (avg % 2 == 0)
			{
				s = "0" + s;
			}
			else
			{
				s = "1" + s;
			}
			avg /= 2;
		}
		return s;
	}
}
