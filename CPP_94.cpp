#include<stdio.h>
#include<vector>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int largestPrime(vector<int> lst) {
    for (int i : lst) {
        if (isPrime(i)) {
            return i;
        }
    }
    return -1; // or throw an exception
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int skjkasdkd(vector<int> lst) {
    int largestPrimeValue = largestPrime(lst);
    if (largestPrimeValue > 0) {
        return sumOfDigits(largestPrimeValue);
    } else {
        // handle error
        return -1; // or throw an exception
    }
}