#include <stdio.h>
using namespace std;

long long special_factorial(int n){
    long long result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
        for(int j = 2; j <= i; j++){
            result *= j;
        }
    }
    return result;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Brazilian Factorial of %d is: %lld\n", n, special_factorial(n));
    return 0;