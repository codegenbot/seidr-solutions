/*
Return true if a given number is prime, and false otherwise.
>>> is_prime(6)
false
>>> is_prime(101)
true
>>> is_prime(11)
true
>>> is_prime(13441)
true
>>> is_prime(61)
true
>>> is_prime(4)
false
>>> is_prime(1)
false
*/
#include<stdio.h>
using namespace std;
bool is_prime(long long n){
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%s\n", is_prime(n) ? "true" : "false");
    return 0;
}
