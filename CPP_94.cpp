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

int largestPrimeDigitSum(const vector<int>& lst) {
    int largestPrime = 0;
    for (int num : lst) {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && sumOfDigits(num) > sumOfDigits(largestPrime)) {
            largestPrime = num;
        }
    }
    return sumOfDigits(largestPrime);
}

int skjkasdkd(vector<int> lst) {
    return largestPrimeDigitSum(lst);
}