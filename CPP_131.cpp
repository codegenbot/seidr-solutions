/*
Given a positive integer n, return the product of the odd digits.
Return 0 if all digits are even.
For example:
digits(1)  == 1
digits(4)  == 0
digits(235) == 15
*/
#include<stdio.h>
#include<string>
using namespace std;
int digits(int n){
  int sum=0;
  while(n){
    int a=n%10;
    if(a%2==1) sum+=a;
    n/=10;
  }
  return sum;
}
