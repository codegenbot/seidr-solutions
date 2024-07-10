int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int largestPrime(vector<int> lst) {
    for (int num : lst) {
        if (isPrime(num)) {
            return num;
        }
    }
    return -1; // Return -1 if no prime found
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
    int largestPrimeValue = largestPrime(lst);
    if (largestPrimeValue != -1) {
        return sumOfDigits(largestPrimeValue);
    } else {
        return 0; // Return 0 if no prime found
    }
}