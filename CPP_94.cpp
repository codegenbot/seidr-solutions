int skjkasdkd(vector<int> lst){
    int max_prime = 0;
    for(int x:lst){
        if(isPrime(x) && x > max_prime)
            max_prime = x;
    }
    int sum = 0;
    while(max_prime){
        sum += max_prime % 10;
        max_prime /= 10;
    }
    return sum;
}

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}