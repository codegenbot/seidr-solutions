/*
Return the largest prime factor of n. Assume n > 1 and is not a prime.
>>> largest_prime_factor(13195)
29
>>> largest_prime_factor(2048)
2
*/
#include<stdio.h>
using namespace std;
int largest_prime_factor(int n){
    int i;
    while(n%2 == 0){
        n = n/2;
    }
    for(i=3; i <= n/2; i++){
        while(n%i == 0){
            n = n/i;
        }
    }
    return n;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", largest_prime_factor(n));
    return 0;
}
