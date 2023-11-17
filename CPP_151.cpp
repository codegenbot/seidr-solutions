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
  if (lst.size()==0)
    return 0;
  else{
    long long sum=0;
    for (size_t i=0;i<lst.size();i++){
      if (lst[i]>0 && floor(lst[i])==lst[i] && fmod(lst[i],2)==1){
        sum+=(lst[i]*lst[i]);
      }
    }
    return sum;
  }
}

int main(){
  vector<float> lst1={1, 3, 2, 0};
  long long odd_sum = 1 + 9 + 0 + 0;
  assert (double_the_difference(lst1) == odd_sum );
  vector<float> lst2={-1, -2, 0};
  odd_sum =0;
  assert (double_the_difference(lst2) == odd_sum );
  vector<float> lst3={9, -2};
  odd_sum = 81;
  assert (double_the_difference(lst3) == odd_sum );
  vector<float> lst4={0};
  odd_sum = 0;
  assert (double_the_difference(lst4) == odd_sum );
  vector<float> lst5;
  odd_sum = 0;
  assert (double_the_difference(lst5) == odd_sum );
  return 0;
}
