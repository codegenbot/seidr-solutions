bool is_multiply_prime(int a){
    for(int i=2; i<=100; i++){
        if(isPrime(i) && a/i > 0 && is_multiply_prime(a/i)){
            return true;
        }
    }
    return false;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}