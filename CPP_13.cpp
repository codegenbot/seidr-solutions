/*
Return a greatest common divisor of two integers a and b
>>> greatest_common_divisor(3, 5)
1
>>> greatest_common_divisor(25, 15)
5
*/
#include<stdio.h>
using namespace std;
int greatest_common_divisor(int a, int b){
    int max,min;
    if(a>b){
        max=a;
        min=b;
    }
    else{
        max=b;
        min=a;
    }
    int gcd;
    for(int i=1;i<=min;i++){
        if(max%i==0 && min%i==0){
            gcd=i;
        }
    }
    return gcd;
}
