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
vector <int> a;
int even = 0, odd = 0;
	for (int i = 0; i < 11; ++i, num = num/10)
	{
		if (num % 2 == 0) even++;
		else odd++;
	}
	a.push_back(even);
	a.push_back(odd);
	return a;
using namespace std;
vector<int> even_odd_count(int num){
