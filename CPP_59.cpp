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
    int largest = 0;
    while(n % 2 == 0){
        largest = 2;
        n /= 2;
    }
    for(int i = 3; i <= n; i += 2){
        while(n % i == 0){
            largest = i;
            n /= i;
        }
    }
    return largest;
}

int main(){
    cout << largest_prime_factor(13195) << endl;
    cout << largest_prime_factor(2048) << endl;
}
