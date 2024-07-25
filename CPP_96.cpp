vector<int> result;
    if(n <= 1) return result;
    vector<bool> is_prime(n, true);
    for(int p = 2; p * p < n; ++p){
        if(is_prime[p]){
            for(int i = p * p; i < n; i += p){
                is_prime[i] = false;
            }
        }
    }
    for(int i = 2; i < n; ++i){
        if(is_prime[i]){
            result.push_back(i);
        }
    }
    return result;