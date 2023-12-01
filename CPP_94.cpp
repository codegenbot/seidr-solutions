#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst) {
    int maxPrime = 0;
    int sumOfDigits = 0;

    for (int num : lst) {
        bool isPrime = true;

        if (num <= 1) {
            continue;
        }

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime && num > maxPrime) {
            maxPrime = num;
        }
    }

    while (maxPrime > 0) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }

    return sumOfDigits;
}