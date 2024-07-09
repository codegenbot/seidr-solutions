#include <vector>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int largestPrime(vector<int> lst) {
    int maxVal = -1;
    for (int i = 2; i <= 100000; i++) {
        bool isPrime = true;
        if (i < 2)
            continue;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            bool found = false;
            for (int val : lst) {
                if (val > maxVal && val == i)
                    maxVal = val, found = true;
            }
            if (found)
                return sumOfDigits(maxVal);
        }
    }
    return -1; // no prime found
}

int skjkasdkd(vector<int> lst) {
    return largestPrime(lst);
}