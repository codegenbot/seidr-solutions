/*
Given a vector of numbers, return the sum of squares of the numbers
in the vector that are odd. Ignore numbers that are negative or not integers.

double_the_difference({1, 3, 2, 0}) == 1 + 9 + 0 + 0 = 10
double_the_difference({-1, -2, 0}) == 0
double_the_difference({9, -2}) == 81
double_the_difference({0}) == 0  

If the input vector is empty, return 0.
*/
#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;

long long double_the_difference(vector<long double> lst){
	long long sum = 0;
	for(int i = 0; i < lst.size(); i++){
		if(lst[i] >= 0 && floor(lst[i]) == lst[i]){
			if(fmod(lst[i], 2) != 0){
				sum += pow(lst[i], 2);
			}
		}
	}
	return sum;
}


int main(){
  vector<long double> lst = {1.0, 3.0, 2.0, 0.0};
  long long odd_sum = 10;
  assert (double_the_difference(lst) == odd_sum );
  
  lst = {-1.0, -2.0, 0.0};
  odd_sum = 0;
  assert (double_the_difference(lst) == odd_sum );
  
  lst = {9.0, -2.0};
  odd_sum = 81;
  assert (double_the_difference(lst) == odd_sum );
  
  lst = {0.0};
  odd_sum = 0;
  assert (double_the_difference(lst) == odd_sum );
  
  lst = {};
  odd_sum = 0;
  assert (double_the_difference(lst) == odd_sum );
  
  lst = {-1.0, -2.0, -3.0, -4.0};
  odd_sum = 0;
  assert (double_the_difference(lst) == odd_sum );
  
  lst = {-1.0, -2.0, -3.0, -4.0, 5.0, 6.0, 7.0};
  odd_sum = 25 + 49 + 49;
  assert (double_the_difference(lst) == odd_sum );
  
  lst = {-1.0, -2.0, -3.0, -4.0, 5.0, 6.0, 7.0, -8.0, -9.0, -10.0, -11.0};
  odd_sum = 25 + 49 + 49;
  assert (double_the_difference(lst) == odd_sum );
  
  lst = {-1.0, -2.0, -3.0, -4.0, 5.0, 6.0, 7.0, -8.0, -9.0, -10.0, -11.0, 12.0, 13.0, 14.0, 15.0};
  odd_sum = 25 + 49 + 49 + 144 + 169 + 225;
  assert (double_the_difference(lst) == odd_sum );
  
  lst = {-1.0, -2.0, -3.0, -4.0, 5.0, 6.0, 7.0, -8.0, -9.0, -10.0, -11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0, 21.0, 22.0, 23.0, 24.0, 25.0};
  odd_sum = 25 + 49 + 49 + 144 + 169 + 225 + 256 + 289 + 361;
  assert (double_the_difference(lst) == odd_sum );
  
  lst = {-1.0, -2.0, -3.0, -4.0, 5.0, 6.0, 7.0, -8.0, -9.0, -10.0, -11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0, 21.0, 22.0, 23.0, 24.0, 25.0, 26.0, 27.0, 28.0, 29.0, 30.0, 31.0, 32.0, 33.0, 34.0, 35.0, 36.0, 37.0, 38.0, 39.0, 40.0, 41.0, 42.0, 43.0, 44.0, 45.0, 46.0, 47.0, 48.0, 49.0};
  odd_sum = 25 + 49 + 49 + 144 + 169 + 225 + 256 + 289 + 361 + 400 + 441 + 529 + 576 + 625;
  assert (double_the_difference(lst) == odd_sum );
  
  lst = {-1.0, -2.0, -3.0, -4.0, 5.0, 6.0, 7.0, -8.0, -9.0, -10.0, -11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0, 21.0, 22.0, 23.0, 24.0, 25.0, 26.0, 27.0, 28.0, 29.0, 30.0, 31.0, 32.0, 33.0, 34.0, 35.0, 36.0, 37.0, 38.0, 39.0, 40.0, 41.0, 42.0, 43.0, 44.0, 45.0, 46.0, 47.0, 48.0, 49.0, 50.0, 51.0, 52.0, 53.0, 54.0, 55.0, 56.0, 57.0, 58.0, 59.0, 60.0, 61.0, 62.0, 63.0, 64.0, 65.0, 66.0, 67.0, 68.0, 69.0, 70.0, 71.0, 72.0, 73.0, 74.0, 75.0, 76.0, 77.0, 78.0, 79.0, 80.0, 81.0, 82.0, 83.0, 84.0, 85.0, 86.0, 87.0, 88.0, 89.0, 90.0, 91.0, 92.0, 93.0, 94.0, 95.0, 96.0, 97.0, 98.0, 99.0};
  odd_sum = 25 + 49 + 49 + 144 + 169 + 225 + 256 + 289 + 361 + 400 + 441 + 529 + 576 + 625 + 676 + 729 + 841 + 900 + 961 + 1024 + 1089 + 1156 + 1225 + 1369 + 1444 + 1521 + 1600 + 1681 + 1764 + 1849 + 1936 + 2025 + 2116 + 2209 + 2304 + 2401 + 2500 + 2601 + 2704 + 2809 + 2916 + 3025 + 3136 + 3249 + 3364 + 3481 + 3600 + 3721 + 3844 + 3969 + 4096 + 4225 + 4356 + 4489 + 4624 + 4761 + 4900 + 5041 + 5184 + 5329 + 5476 + 5625 + 5776 + 5929 + 6084 + 6241 + 6400 + 6561 + 6724 + 6889 + 7056 + 7225 + 7396 + 7569 + 7744 + 7921 + 8100 + 8281 + 8464 + 8649 + 8836 + 9025 + 9216 + 9409 + 9604 + 9801 + 10000;
  assert (double_the_difference(lst) == odd_sum );
  
  return 0;
}
