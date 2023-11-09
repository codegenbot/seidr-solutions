/*
prime_fib returns n-th number that is a Fibonacci number and it's also prime.
>>> prime_fib(1)
2
>>> prime_fib(2)
3
>>> prime_fib(3)
5
>>> prime_fib(4)
13
>>> prime_fib(5)
89
*/
#include<stdio.h>
using namespace std;
int prime_fib(int n){
  int a=2,b=3,c=5,i=6,count=2;
  while(count<n){
    if(i%a==0||i%b==0||i%c==0)
      i++;
    else{
      a=b;
      b=c;
      c=i;
      i++;
      count++;
    }
  }
  return c;
}
