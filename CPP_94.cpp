int sumOfUniqueDigitsInPrime(int n) {
    vector<int> lst;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            lst.push_back(i);
        }
    }
    int maxPrime = 0;
    for (int num : lst) {
        if (isPrime(num)) {
            maxPrime = num;
            break;
        }
    }
    int sumOfDigits = 0;
    while (maxPrime > 0) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}