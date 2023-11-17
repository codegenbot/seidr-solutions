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
using namespace std;
long long double_the_difference(vector<double> lst){
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
  vector<double> lst = {1, 3, 2, 0};
  long long odd_sum = 10;
  assert (double_the_difference(lst) == odd_sum );

  vector<double> lst2 = {-1, -2, 0};
  assert (double_the_difference(lst2) == 0 );

  vector<double> lst3 = {9, -2};
  assert (double_the_difference(lst3) == 81 );

  vector<double> lst4 = {0};
  assert (double_the_difference(lst4) == 0 );

  vector<double> lst5 = {};
  assert (double_the_difference(lst5) == 0 );

  printf("Your code passed all our tests!\n");
  return 0;
}
