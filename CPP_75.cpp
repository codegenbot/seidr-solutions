#include<stdio.h>
using namespace std;
bool is_prime(int n){
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

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