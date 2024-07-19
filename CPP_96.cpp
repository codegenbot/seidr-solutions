bool areSame(vector<int> a, vector<int> b);

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

vector<int> count_up_to(int n) {
    vector<int> primes;
    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}