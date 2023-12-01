#include <vector>
#include <cmath>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int largestPrimeSum(vector<int> lst) {
    int largestPrime = 0;
    for (int num : lst) {
        bool isPrime = true;
        if (num > 1) {
            for (int i = 2; i <= sqrt(num); i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        } else {
            isPrime = false;
        }
        if (isPrime && num > largestPrime) {
            largestPrime = num;
        }
    }
    return sumOfDigits(largestPrime);
}