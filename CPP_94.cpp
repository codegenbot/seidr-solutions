#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst) {
    int largestPrime = 0;
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
    
    int sumOfDigits = 0;
    while (largestPrime > 0) {
        sumOfDigits += largestPrime % 10;
        largestPrime /= 10;
    }
    
    return sumOfDigits;
}