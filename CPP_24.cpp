/*
For a given number n, find the largest number that divides n evenly, smaller than n
>>> largest_divisor(15)
5
*/
#include<stdio.h>
using namespace std;
int largest_divisor(int n){
	for (int i = n-1; i >= 1; i--){
		if (n % i == 0){
			return i;
		}
	}
}
