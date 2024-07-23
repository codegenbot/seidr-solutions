vector<int> primes;
    if (n < 2) {
        return primes;
    }
    primes.push_back(2);
    for (int i = 3; i < n; i += 2) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes.push_back(i);
        }
    }
    return primes;