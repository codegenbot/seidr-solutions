/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
#include<iostream>
    add({4, 2, 6, 7}) ==> 2 
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int sum=0;
    for(int i=0;i<lst.size();i=i+2)
    {
        if(lst[i]%2==0)
        sum=sum+lst[i];
    }
    return sum;
}
