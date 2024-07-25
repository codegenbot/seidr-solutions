vector<int> res;
    if(n < 2) return res;
    vector<bool> isPrime(n, true);
    for(int p = 2; p*p < n; p++){
        if(isPrime[p]){
            for(int i = p*p; i < n; i += p){
                isPrime[i] = false;
            }
        }
    }
    for(int p = 2; p < n; p++){
        if(isPrime[p]){
            res.push_back(p);
        }
    }
    return res;
}