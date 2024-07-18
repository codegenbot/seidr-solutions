vector<int> count_up_to(int n){
    vector<int> result;
    if(n < 2) {
        return result;
    }
    vector<bool> isPrime(n, true);
    
    for(int p = 2; p * p < n; p++){
        if(isPrime[p] == true){
            for(int i = p * p; i < n; i += p){
                isPrime[i] = false;
            }
        }
    }
    
    for(int p = 2; p < n; p++) {
        if(isPrime[p]) {
            result.push_back(p);
        }
    }
    
    return result;
}