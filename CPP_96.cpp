vector<int> primes;
    if(n < 2) return primes;
    vector<bool> isPrime(n, true);
    for(int p = 2; p * p < n; p++){
        if(isPrime[p]){
            for(int i = p * p; i < n; i += p){
                isPrime[i] = false;
            }
        }
    }
    for(int i = 2; i < n; i++){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
    return primes;
}