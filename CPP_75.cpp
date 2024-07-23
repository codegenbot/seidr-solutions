bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int temp = i;
        bool isPrime = true;
        for (int j = 2; j * j <= temp; j++) {
            if (temp % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (!isPrime)
            continue;
        for (int k = 2; k <= sqrt(a / i); k++) {
            int temp2 = k;
            bool isPrime2 = true;
            for (int l = 2; l * l <= temp2; l++) {
                if (temp2 % l == 0) {
                    isPrime2 = false;
                    break;
                }
            }
            if (isPrime2 && a / i / k == temp)
                return true;
        }
    }
    return false;
}