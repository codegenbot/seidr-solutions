#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;
int prod_signs(vector<int> arr) {
  if (arr.empty()) {
    return -32768;
  }
  
  int product = 1;
  int sum_magnitudes = 0;
  
  for (int num : arr) {
    product *= (num > 0) - (num < 0);
    sum_magnitudes += abs(num);
  }
  
  return product * sum_magnitudes;
}