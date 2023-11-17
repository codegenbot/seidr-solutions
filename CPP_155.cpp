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
    	vector<int> evenodd;
	int even = 0;
	int odd =0;
	unsigned int n = abs(num);
	
	while (n != 0) {
		if (n % 10 % 2 == 0) ++even;
		else ++odd;
		n /= 10;
	}

	evenodd.push_back(even);
	evenodd.push_back(odd);

	return evenodd;
}
using namespace std;
vector<int> even_odd_count(int num){
