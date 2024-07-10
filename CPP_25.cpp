vector<int> prime_factors;
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            prime_factors.push_back(i);
            n /= i;
        }
    }
    return prime_factors;