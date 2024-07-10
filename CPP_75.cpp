bool is_multiply_prime(int a){
    for (int i = 2; i <= 100; i++) {
        for (int j = i; j <= 100; j++) {
            int k = a / (i * j);
            if (k > j && isPrime(k) && isPrime(i) && isPrime(j)) {
                return true;
            }
        }
    }
    return false;
}

bool isPrime(int n){
    if(n<=1)
        return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}