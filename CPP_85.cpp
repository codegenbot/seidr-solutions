/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
*/
#include<stdio.h>
#include<vector>
  int sum = 0;
  int i = 0;
  while (i < lst.size()) {
    if (lst[i] % 2 == 0) {
      sum += lst[i];
    }
    i += 2;
  }
  return sum;
}
using namespace std;
int add(vector<int> lst){
