/*
A simple program which should return the value of x if n is 
a prime number and should return the value of y otherwise.

Examples:
for x_or_y(7, 34, 12) == 34
for x_or_y(15, 8, 5) == 5

*/
#include<stdio.h>
using namespace std;
int x_or_y(int n,int x,int y){
int i;
for(i=2;i<n;i++)
{
if(n%i==0)
{
return y;
}
}
return x;
}
int main()
{
int a,b,c,d;
scanf("%d%d%d",&a,&b,&c);
d=x_or_y(a,b,c);
printf("%d",d);
return 0;
}
