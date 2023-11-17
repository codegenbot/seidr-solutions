/*
Given a vector of numbers, return the sum of squares of the numbers
in the vector that are odd. Ignore numbers that are negative or not integers.

double_the_difference({1, 3, 2, 0}) == 1 + 9 + 0 + 0 = 10
double_the_difference({-1, -2, 0}) == 0
double_the_difference({9, -2}) == 81
double_the_difference({0}) == 0  

If the input vector is empty, return 0.
*/
#include<stdio.h>
#include<math.h>
#include<vector>
#include<assert.h>
using namespace std;
long long double_the_difference(vector<float> lst){
	
	long long result = 0;
	for (int i = 0; i < lst.size(); i++) {
		if (fmod(lst[i], 2) == 0 && lst[i] >= 0) {
			result += pow(lst[i], 2);
		}
	}
	return result;
}
int main(){
	vector<float> lst;
	lst.push_back(1);
	lst.push_back(3);
	lst.push_back(2);
	lst.push_back(0);
	int odd_sum = 1 + 9 + 0 + 0;
    assert (double_the_difference(lst) == odd_sum );
}
