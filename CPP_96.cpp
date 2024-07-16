vector<int> result;
    if (n < 2) {
        return result;
    }
    
    vector<bool> primes(n, true);
    primes[0] = primes[1] = false;
    
    for (int i = 2; i * i < n; ++i) {
        if (primes[i]) {
            for (int j = i * i; j < n; j += i) {
                primes[j] = false;
            }
        }
    }
    
    for (int i = 2; i < n; ++i) {
        if (primes[i]) {
            result.push_back(i);
        }
    }
    
    return result;
}