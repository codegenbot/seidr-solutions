
/*
Write a function that returns true if the given number is the multiplication of 3 prime numbers
and false otherwise.
Knowing that (a) is less then 100. 
Example:
is_multiply_prime(30) == true
30 = 2 * 3 * 5
*/
#include<stdio.h>
using namespace std;
bool is_multiply_prime(int a){
    if (a < 2) {
        return false;
    }
    for (int i = 2; i <= a/2; i++) {
        if (a % i == 0 && is_prime(i) && is_prime(a/i)) {
            return true;
        }
    }
    return false;
}
bool is_prime(int n){
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}