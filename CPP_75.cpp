/*
Write a function that returns true if the given number is the multiplication of 3 prime numbers
and false otherwise.
Knowing that (a) is less then 100. 
Example:
is_multiply_prime(30) == true
30 = 2 * 3 * 5
*/
#include<stdio.h>
using namespace std;
bool is_multiply_prime(int a){
	bool arr[100] = {true};
	for(int i = 2; i < 100; i++){
		if(arr[i]){
			for(int j = i * 2; j < 100; j+=i){
				arr[j] = false;
			}
		}
	}
	int count = 0;
	for(int i = 2; i < 100; i++){
		if(arr[i] && a % i == 0){
			count++;
		}
	}
	return count == 3;
}
