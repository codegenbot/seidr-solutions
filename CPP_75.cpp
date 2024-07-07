Here is the solution:

bool is_multiply_prime(int a) {
    for (int i = 2; i <= 100; i++) {
        for (int j = i; j <= 100; j++) {
            for (int k = j; k <= 100; k++) {
                if (i * j * k == a) {
                    bool is_prime1 = is_prime(i);
                    bool is_prime2 = is_prime(j);
                    bool is_prime3 = is_prime(k);
                    return is_prime1 && is_prime2 && is_prime3;
                }
            }
        }
    }
    return false;
}

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}