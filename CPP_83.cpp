/*
Given a positive integer n, return the count of the numbers of n-digit
positive integers that start or end with 1.
*/
#include<stdio.h>
using namespace std;
int starts_one_ends(int n){
/*
Complete the following code given the task description and function signature.
*/
int count=0;
int i;
for(i=1;i<=n;i++)
{
if(i==1 || i==n)
count++;
else
count=count+2;
}
return count;
}
