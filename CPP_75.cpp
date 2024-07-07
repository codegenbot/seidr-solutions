bool is_multiply_prime(int a) {
    for (int i = 2; i <= 100; i++) {
        int temp = a;
        bool flag = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                while (i % j == 0)
                    i /= j;
                flag = false;
                break;
            }
        }
        if (flag && temp % i == 0) {
            int b = a / i;
            for (int k = 2; k <= 100; k++) {
                temp = b;
                bool f = true;
                for (int l = 2; l <= sqrt(k); l++) {
                    if (k % l == 0) {
                        while (k % l == 0)
                            k /= l;
                        f = false;
                        break;
                    }
                }
                if (f && temp % k == 0) {
                    int c = b / k;
                    for (int m = 2; m <= 100; m++) {
                        temp = c;
                        bool g = true;
                        for (int n = 2; n <= sqrt(m); n++) {
                            if (m % n == 0) {
                                while (m % n == 0)
                                    m /= n;
                                g = false;
                                break;
                            }
                        }
                        if (g && temp % m == 0) {
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}