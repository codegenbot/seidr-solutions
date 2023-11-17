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
    int max = 1;
    while (n % 2 == 0) {
        n /= 2;
        max = 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            n /= i;
            if (max < i) {
                max = i;
            }
        }
    }
    if (n > 2) {
        max = n;
    }
    return max;
}
