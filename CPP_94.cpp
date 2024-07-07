Here is the completed code:

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int largestPrime(vector<int> lst) {
    int maxPrime = 0;
    for (int i : lst) {
        if (isPrime(i)) {
            maxPrime = i;
            break;
        }
    }
    return maxPrime;
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int skjkasdkd(vector<int> lst) {
    int maxPrime = largestPrime(lst);
    if (maxPrime > 0) {
        return sumOfDigits(maxPrime);
    } else {
        return 0;
    }
}