vector<int> count_up_to(int n){
    vector<int> primes;
    if(n <= 1){
        return primes;
    }
    primes.push_back(2);
    for(int num = 3; num < n; num += 2){
        bool isPrime = true;
        for(int i = 2; i * i <= num; i++){
            if(num % i == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            primes.push_back(num);
        }
    }
    return primes;
}