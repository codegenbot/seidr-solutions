#include<stdio.h>
using namespace std;

int fib4(int n){
    if(n<0 || n>3) return 0; // base cases
    int fib[4] = {0, 0, 2, 0}; // initialize the first four elements
    for(int i=4; i<=n; i++){
        int sum = (fib[i-1] + fib[i-2] + fib[i-3]) % 4;
        fib[i%4] = sum;
    }
    return fib[n%4];
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %dth element of the Fib4 sequence is: %d\n", n, fib4(n));
    return 0;
}