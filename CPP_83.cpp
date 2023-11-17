/*
Given a positive integer n, return the count of the numbers of n-digit
positive integers that start or end with 1.
*/
#include<stdio.h>
using namespace std;
int starts_one_ends(int n){
int count = 0;
int i = 1;
while(i <= n){
count += 9 * pow(10, i - 1);
i++;
}
return count;
}
int main(){
int n;
scanf("%d", &n);
printf("%d", starts_one_ends(n));
return 0;
}
