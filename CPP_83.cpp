/*
Given a positive integer n, return the count of the numbers of n-digit
positive integers that start or end with 1.
*/
#include<stdio.h>
using namespace std;
int main(){
  int count=0;
  for(int i=1;i<=5;i++){
    if(i==1)
      count+=1;
    else
      count+=10*count;
  }
  return count;
}
