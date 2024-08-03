#include<stdio.h>
using namespace std;
long long special_factorial(int n){
    if(n == 0) return 1;
    long long res = 1;
    for(int i = 1; i <= n; i++){
        res *= i;
        for(int j = 2; j <= i; j++){
            res *= j;
        }
    }
    return res;
}