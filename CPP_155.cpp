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
	vector<int> even_odd;
	int even = 0;
	int odd = 0;
	int temp = num;
	if (num < 0) {
		temp = temp * -1;
	}
	while (temp > 0) {
		if (temp % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
		temp = temp / 10;
	}
	even_odd.push_back(even);
	even_odd.push_back(odd);
	return even_odd;
}
using namespace std;
vector<int> even_odd_count(int num){
