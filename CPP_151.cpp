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
long long double_the_difference(vector<long double> lst){
	long long sum = 0;
	for(int i = 0; i < lst.size(); i++){
		if(lst[i] > 0 && floor(lst[i]) == lst[i]){
			if(fmod(lst[i], 2) != 0){
				sum += pow(lst[i], 2);
			}
		}
	}
	return sum;
}
int main(){
	vector<long double> lst = {1, 3, 2, 0};
	long long odd_sum = 10;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-1, -2, 0};
    odd_sum = 0;
    assert (double_the_difference(lst) == odd_sum );

    lst = {9, -2};
    odd_sum = 81;
    assert (double_the_difference(lst) == odd_sum );

    lst = {0};
    odd_sum = 0;
    assert (double_the_difference(lst) == odd_sum );

    lst = {};
    odd_sum = 0;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-2, -3, -4, -5, -6, -7, -8, -9, -10};
    odd_sum = 0;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-2, -3, -4, -5, -6, -7, -8, -9, -10, -11};
    odd_sum = 121;
    assert (double_the_difference(lst) == odd_sum );

    lst = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};
    odd_sum = 0;
    assert (double_the_difference(lst) == odd_sum );

    lst = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1, 11.11};
    odd_sum = 122.41;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-1.1, -2.2, -3.3, -4.4, -5.5, -6.6, -7.7, -8.8, -9.9, -10.1};
    odd_sum = 0;
    assert (double_the_difference(lst) == odd_sum );

    lst = {-1.1, -2.2, -3.3, -4.4, -5.5, -6.6, -7.7, -8.8, -9.9, -10.1, -11.11};
    odd_sum = 122.41;
    assert (double_the_difference(lst) == odd_sum );

    lst = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1, 11.11, 12.12};
    odd_sum = 144.82;
    assert (double_the_difference(lst) == odd_sum );
}
