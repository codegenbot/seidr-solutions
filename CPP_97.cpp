/*
Complete the function that takes two integers and returns 
the product of their unit digits.
Assume the input is always valid.
Examples:
multiply(148, 412) should return 16.
multiply(19, 28) should return 72.
multiply(2020, 1851) should return 0.
multiply(14,-15) should return 20.
*/
#include<stdio.h>
#include<math.h>
using namespace std;
int multiply(int a,int b){
  int a1=abs(a);
  int b1=abs(b);
  int a2=a1%10;
  int b2=b1%10;
  int c=a2*b2;
  return c;
}
