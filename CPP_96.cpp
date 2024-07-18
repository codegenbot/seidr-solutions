vector<int> count_up_to(int n){
    vector<int> primes;
    if(n <= 1) {
        return primes;
    }
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    for(int i=2; i*i<n; i++) {
        if(isPrime[i]) {
            for(int j=i*i; j<n; j+=i) {
                isPrime[j] = false;
            }
        }
    }
    for(int i=2; i<n; i++) {
        if(isPrime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}