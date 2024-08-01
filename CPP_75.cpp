bool is_multiply_prime(int a) {
    for (int i = 2; i <= 100; i++) {
        for (int j = i; j <= 100; j++) {
            for (int k = j; k <= 100; k++) {
                if (i * j * k == a) {
                    bool is_prime1 = true;
                    bool is_prime2 = true;
                    bool is_prime3 = true;

                    for (int p = 2; p * p <= i; p++) {
                        if (i % p == 0) {
                            is_prime1 = false;
                            break;
                        }
                    }

                    for (int p = 2; p * p <= j; p++) {
                        if (j % p == 0) {
                            is_prime2 = false;
                            break;
                        }
                    }

                    for (int p = 2; p * p <= k; p++) {
                        if (k % p == 0) {
                            is_prime3 = false;
                            break;
                        }
                    }

                    return is_prime1 && is_prime2 && is_prime3;
                }
            }
        }
    }
    return false;
}