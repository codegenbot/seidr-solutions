#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            int j = 2;
            while (j * j <= i) {
                if (i % j == 0 || i % (j + 2) == 0)
                    return false;
                j += 3;
            }
            for (int k = i; k <= a / i; k++) {
                if (k * i == a) {
                    int prime1 = i, prime2 = k;
                    while (prime1 % 2 == 0 && prime2 % 2 == 0)
                        prime1 /= 2, prime2 /= 2;
                    bool isPrime1 = true, isPrime2 = true, isPrime3 = true;
                    for (int p = 3; p <= sqrt(prime1); p += 2) {
                        if (prime1 % p == 0) {
                            isPrime1 = false;
                            break;
                        }
                    }
                    for (int p = 3; p <= sqrt(prime2); p += 2) {
                        if (prime2 % p == 0) {
                            isPrime2 = false;
                            break;
                        }
                    }
                    for (int p = 3; p <= sqrt(k); p += 2) {
                        if (k % p == 0) {
                            isPrime3 = false;
                            break;
                        }
                    }
                    return isPrime1 && isPrime2 && isPrime3;
                }
            }
        }
    }
    return false;
}