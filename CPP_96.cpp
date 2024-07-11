vector<int> result;
    if(n < 2) return result;
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i < n; ++i){
        if(isPrime[i]){
            result.push_back(i);
            for(int j = i*2; j < n; j += i){
                isPrime[j] = false;
            }
        }
    }
    return result;