Here is the solution:

bool is_multiply_prime(int a){
    for (int i = 2; i < 100; ++i) {
        if (isPrime(i)) {
            for (int j = i; j < 100; ++j) {
                if (isPrime(j)) {
                    int k = 100;
                    while (k > 1 && !isPrime(k)) {
                        --k;
                    }
                    if (a == i * j * k) {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}