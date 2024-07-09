#include <vector>
#include <string>

using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int largestPrime(vector<int> lst) {
    for (int i : lst) {
        if (isPrime(i)) {
            return i;
        }
    }
    return -1; // or any other default value
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int skjkasdkd(vector<int> lst) {
    int largestPrimeVal = largestPrime(lst);
    return sumOfDigits(largestPrimeVal);
}