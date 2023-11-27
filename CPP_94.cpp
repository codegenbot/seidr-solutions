#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst) {
    int largestPrime = 0;
    int sumOfDigits = 0;

    for (int num : lst) {
        bool isPrime = true;

        if (num <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime && num > largestPrime) {
            largestPrime = num;
        }
    }

    std::string largestPrimeStr = std::to_string(largestPrime);
    for (char digit : largestPrimeStr) {
        sumOfDigits += digit - '0';
    }

    return sumOfDigits;
}