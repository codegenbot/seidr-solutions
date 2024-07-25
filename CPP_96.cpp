vector<int> count_up_to(int n){
    vector<int> primes;
    if(n < 2) return primes;
    
    vector<bool> is_prime(n, true);
    for(int i = 2; i * i < n; ++i){
        if(!is_prime[i]) continue;
        for(int j = i * i; j < n; j += i){
            is_prime[j] = false;
        }
    }
    
    for(int i = 2; i < n; ++i){
        if(is_prime[i]) primes.push_back(i);
    }
    
    return primes;
}