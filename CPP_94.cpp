int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int largestPrime(vector<int> lst) {
    for (int i = 2; i < 1000000; i++) {
        bool isPrime = true;
        for (int j : lst) {
            if (j % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) return i;
    }
    return -1;
}

int skjkasdkd(vector<int> lst) {
    int maxPrime = largestPrime(lst);
    if (maxPrime < 2) return 0; // No prime number found
    return sumOfDigits(maxPrime);
}