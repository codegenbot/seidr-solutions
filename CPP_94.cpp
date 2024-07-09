int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int largestPrime(vector<int> lst) {
    for (int i = lst[0]; i >= 2; --i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            return i;
        }
    }
    return -1;
}

int skjkasdkd(vector<int> lst) {
    int largestPrimeValue = largestPrime(lst);
    if (largestPrimeValue == -1) {
        return 0;
    }
    return sumOfDigits(largestPrimeValue);
}