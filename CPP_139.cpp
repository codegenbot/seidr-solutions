#include<stdio.h>
using namespace std;

long long special_factorial(int n){
    if(n == 0)
        return 1;
    else{
        long long result = 1;
        for(int i = 1; i <= n; i++){
            result *= i;
            for(int j = 2; j <= i; j++){
                result *= j;
            }
        }
        return result;
    }
}