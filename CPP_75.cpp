#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int remainder = a % i;
        if (remainder == 0) {
            int counter = 1;
            for (int j = i; ; j++) {
                int remainder1 = a / i % j;
                if (remainder1 == 0 || !is_prime(j)) {
                    break;
                }
                counter++;
            }
            return counter >= 3;
        }
    }
    return false;
}

bool is_prime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}