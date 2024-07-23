```c++
bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (!isPrime) continue;

        for (int k = 2; k <= sqrt(a / i); k++) {
            bool isPrime2 = true;
            for (int l = 2; l * l <= k; l++) {
                if (k % l == 0) {
                    isPrime2 = false;
                    break;
                }
            }
            if (!isPrime2) continue;

            if (a / i / k == i && a / i / k == k) return true;
        }
    }
    return false;
}