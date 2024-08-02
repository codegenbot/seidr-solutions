int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int largestPrime(vector<int> lst) {
    for (int i = 2; i <= 1000000; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && find(lst.begin(), lst.end(), i) != lst.end()) {
            return i;
        }
    }
    return -1;
}

int skjkasdkd(vector<int> lst) {
    int largestPrimeNum = largestPrime(lst);
    return sumOfDigits(largestPrimeNum);
}