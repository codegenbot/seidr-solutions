vector<int> count_up_to(int n){
    vector<int> primes;
    if(n <= 1){
        return primes;
    }
    
    vector<bool> is_prime(n, true);
    
    for(int p = 2; p * p < n; p++){
        if(is_prime[p]){
            for(int i = p * p; i < n; i += p){
                is_prime[i] = false;
            }
        }
    }
    
    for(int p = 2; p < n; p++){
        if(is_prime[p]){
            primes.push_back(p);
        }
    }
    
    return primes;
}