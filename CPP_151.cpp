/*
Given a vector of numbers, return the sum of squares of the numbers in the vector that are odd. Ignore numbers that are negative or not integers.

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
long long double_the_difference(vector<float> lst){
  long long sum = 0;
  if (lst.size()>0){ //if it not empty
    for (int i = 0; i<lst.size(); i++){
      if (fmod(lst[i], 2) != 0 && lst[i]>=0){
        sum += lst[i]*lst[i];
      }
    }
  }
  return sum;
}
