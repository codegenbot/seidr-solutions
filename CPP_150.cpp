#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int x_or_y(int n, int x, int y) {
    if (isPrime(n)) {
        return x;
    } else {
        return y;
    }
}