bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int skjkasdkd(vector<int> lst) {
    int maxPrime = -1;
    for (int num : lst) {
        if (isPrime(num) && num > maxPrime) {
            maxPrime = num;
        }
    }
    if (maxPrime == -1) return 0;
    return sumOfDigits(maxPrime);
}