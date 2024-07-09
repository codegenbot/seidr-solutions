bool is_divisor(long long i) {
    return (n % i == 0);
}

bool is_prime(long long n) {
    if(n <= 1)
        return false;
    for(long long i = 2; i*i <= n; i++) {
        if(is_divisor(i))
            return false;
    }
    return true;
}