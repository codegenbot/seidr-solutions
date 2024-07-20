Here is the completed code:

vector<bool> sieve(int n) {
    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (primes[i]) {
            for (int j = i * i; j <= n; j += i) {
                primes[j] = false;
            }
        }
    }
    return primes;
}

int skjkasdkd(vector<int> lst) {
    int maxPrime = 0;
    vector<bool> isPrime = sieve(100000); // assume no number exceeds this
    for (int num : lst) {
        if (num > 0 && isPrime[num]) {
            maxPrime = num;
            break;
        }
    }
    int sumOfDigits = 0;
    while (maxPrime) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}