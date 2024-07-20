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
        bool isPrime = true;
        if (i <= 1) {
            continue;
        }
        for (int j = 2; j * j <= i; j++) {
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
    int largestPrimeNum = largestPrime(lst);
    if (largestPrimeNum == -1) {
        return 0;
    } else {
        return sumOfDigits(largestPrimeNum);
    }
}