#include <vector>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int skjkasdkd(vector<int> lst) {
    int maxPrime = -1;
    for (int num : lst) {
        if (isPrime(num)) {
            maxPrime = num;
            break;
        }
    }

    if (maxPrime == -1) return 0;

    int sumOfDigits = 0;
    while (maxPrime > 0) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }

    return sumOfDigits;
}