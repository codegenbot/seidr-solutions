/*
Evaluate whether the given number n can be written as the sum of exactly 4 positive even numbers
Example
is_equal_to_sum_even(4) == false
is_equal_to_sum_even(6) == false
is_equal_to_sum_even(8) == true
*/
#include<stdio.h>
using namespace std;
bool is_equal_to_sum_even(int n){
	int i;
	int sum=0;
	for(i=2;i<n;i+=2){
		sum+=i;
		if(sum==n){
			return true;
		}
	}
	return false;
}
