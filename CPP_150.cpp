#include <cmath>

bool isPrime(int num);

int x_or_y(int n, int x, int y) {
    if (isPrime(n)) {
        return x;
    } else {
        return y;
    }
}

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}