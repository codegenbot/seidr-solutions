vector<int> result;
    if (n <= 1) {
        return result;
    }
    
    vector<bool> is_prime(n, true);
    is_prime[0] = is_prime[1] = false;
    
    for (int i = 2; i * i < n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    
    for (int i = 2; i < n; ++i) {
        if (is_prime[i]) {
            result.push_back(i);
        }
    }
    
    return result;