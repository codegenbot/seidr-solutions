bool is_multiply_prime(int a) {
    bool isPrime = true;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    if (!isPrime) {
        return false;
    }

    int k = sqrt(a);
    for (int i = 2; i <= k; i++) {
        bool isPrime2 = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime2 = false;
                break;
            }
        }
        if (!isPrime2) continue;

        int temp = a / i;
        bool isPrime3 = true;
        for (int j = 2; j * j <= temp; j++) {
            if (temp % j == 0) {
                isPrime3 = false;
                break;
            }
        }

        if (!isPrime3) continue;

        return true;
    }

    return false;
}