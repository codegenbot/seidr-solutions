Here is the completed code:

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int findLargestPrimeAndSum(vector<int> lst) {
    int largestPrime = -1;
    for (int n : lst) {
        if (isPrime(n)) {
            if (n > largestPrime)
                largestPrime = n;
        }
    }
    if (largestPrime == -1)
        return 0; // or some other default value
    return sumOfDigits(largestPrime);
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