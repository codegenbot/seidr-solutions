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
long long double_the_difference(vector<float> lst){
vector<float> temp;
  long long sum = 0;
  for(unsigned int i = 0; i < lst.size(); i++){
    if(lst.at(i) > 0 && lst.at(i) - (int) lst.at(i) == 0){
      temp.push_back(lst.at(i));
    }
  }
  for(unsigned int i = 0; i < temp.size(); i++){
    if(temp.at(i) % 2 != 0){
      sum += temp.at(i) * temp.at(i);
    }
  }
  return sum;
}
