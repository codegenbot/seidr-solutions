/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>
	vector<int> res(2,0);
	int temp;
	while(num!=0){
		temp=num%10;
		if(temp%2==0)
			res[0]++;
		else
			res[1]++;
		num/=10;
	}
	return res;
}
using namespace std;
vector<int> even_odd_count(int num){
