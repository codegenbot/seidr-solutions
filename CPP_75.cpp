#include <iostream>
using namespace std;

bool is_multiply_prime(int a) {
    for (int i = 2; i <= 100; i++) {
        for (int j = i; j <= 100; j++) {
            for (int k = j; k <= 100; k++) {
                if (i * j * k == a) {
                    bool isPrime = true;
                    for (int p = 2; p * p <= i && isPrime; p++) {
                        if (i % p == 0) {
                            isPrime = false;
                        }
                    }
                    if (!isPrime) {
                        continue;
                    }
                    bool isSecondPrime = true;
                    for (int p = 2; p * p <= j && isSecondPrime; p++) {
                        if (j % p == 0) {
                            isSecondPrime = false;
                        }
                    }
                    if (!isSecondPrime) {
                        continue;
                    }
                    bool isThirdPrime = true;
                    for (int p = 2; p * p <= k && isThirdPrime; p++) {
                        if (k % p == 0) {
                            isThirdPrime = false;
                        }
                    }
                    if (!isThirdPrime) {
                        continue;
                    }
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (is_multiply_prime(a)) {
        cout << "The given number is the multiplication of 3 prime numbers." << endl;
    } else {
        cout << "The given number is not the multiplication of 3 prime numbers." << endl;
    }
    return 0;
}