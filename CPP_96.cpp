vector<int> primes;
    if(n<=2)
        return primes;
    primes.push_back(2);
    for(int num=3; num<n; num+=2){
        bool is_prime = true;
        for(int i=2; i*i<=num; i++){
            if(num%i == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime)
            primes.push_back(num);
    }
    return primes;