/*
Return n-th Fibonacci number.
>>> fib(10)
55
>>> fib(1)
1
>>> fib(8)
21
*/
#include<stdio.h>
using namespace std;
int fib(int n){
  if(n==1)
  return 1;
  else if(n==2)
  return 1;
  else
  return fib(n-1)+fib(n-2);
}

int main(){
  int n;
  cout<<"Enter the value of n:";
  cin>>n;
  cout<<fib(n);
}
