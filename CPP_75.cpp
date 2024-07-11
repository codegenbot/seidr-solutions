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

bool is_multiply_prime(int a) {
    bool found = false;
    for (int i = 2; i <= sqrt(a); i++) {
        int product = 1;
        found = false;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                product *= j;
                while (i % j == 0) {
                    i /= j;
                }
                found = true;
            }
        }
        if (!found && i > 1) {
            return false;
        }
        int count = 0;
        for (int k = 2; k <= sqrt(product); k++) {
            if (product % k == 0) {
                product /= k;
                while (product % k == 0) {
                    product /= k;
                }
                count++;
            }
        }
        if (count >= 3) {
            int b = a / i;
            int c = a / product;
            return is_prime(i) && is_prime(b) && is_prime(c);
        }
    }
    return false;