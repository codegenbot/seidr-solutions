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
	int avg = (n + m) / 2;
	if ((n + m) % 2 == 1)
	{
		if (avg >= (n + m) / 2.0)
		{
			avg--;
		}
	}
	string result = "";
	while (avg)
	{
		result = (avg % 2 == 0 ? "0" : "1") + result;
		avg /= 2;
	}
	return result;
}
int main()
{
	printf("%s\n", rounded_avg(1, 5).c_str());
	printf("%s\n", rounded_avg(7, 5).c_str());
	printf("%s\n", rounded_avg(10, 20).c_str());
	printf("%s\n", rounded_avg(20, 33).c_str());
	return 0;
}
