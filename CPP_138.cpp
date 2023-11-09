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
	int c=0,i=2;
	while(i<=n){
		if(i%2==0){
			c+=i;
			i=i+2;
		}
	}
	if(c==n)
		return true;
	else
		return false;
}
