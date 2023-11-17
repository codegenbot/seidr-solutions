/*
Given a positive integer n, return the count of the numbers of n-digit
positive integers that start or end with 1.
*/
#include<stdio.h>
using namespace std;
int starts_one_ends(int n){
int starts_one_ends(int n){
    if(n==1)
        return 2;
    else if(n==2)
        return 4;
    else if(n==3)
        return 8;
    else if(n==4)
        return 16;
    else
        return 32;
}
int main(){
    int n;
    printf("Enter the number of digits");
    scanf("%d",&n);
    printf("The number of positive integers that start or end with 1 is %d",starts_one_ends(n));
    return 0;
}
