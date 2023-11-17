/*
Given a positive integer n, return the count of the numbers of n-digit
positive integers that start or end with 1.
*/
#include<stdio.h>
using namespace std;
int starts_one_ends(int n){
  int count=0;
  for(int i=1;i<=n;i++){
    if(i==1)
      count+=1;
    else
      count+=10*count;
  }
  return count;
}
int main(){
  int n=5;
  printf("%d",starts_one_ends(n));
  return 0;
}
