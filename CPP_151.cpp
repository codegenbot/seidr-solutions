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
	long long sum = 0;
	for(int i = 0; i < lst.size(); i++){
		if(lst[i] > 0 && floor(lst[i]) == lst[i]){ //check if number is positive and integer
			if(lst[i] % 2 != 0){ //check if number is odd
				sum += pow(lst[i], 2);
			}
		}
	}
	return sum;
}
int main(){
	vector<float> lst = {1, 3, 2, 0};
	long long odd_sum = 10;
	assert (double_the_difference(lst) == odd_sum );
	vector<float> lst1 = {-1, -2, 0};
	long long odd_sum1 = 0;
	assert (double_the_difference(lst1) == odd_sum1 );
	vector<float> lst2 = {9, -2};
	long long odd_sum2 = 81;
	assert (double_the_difference(lst2) == odd_sum2 );
	vector<float> lst3 = {0};
	long long odd_sum3 = 0;
	assert (double_the_difference(lst3) == odd_sum3 );
	return 0;
}
