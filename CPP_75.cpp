```cpp
bool is_multiply_prime(int a) {
    for (int i = 2; i * i <= a; i++) { 
        bool prime = true;
        for (int j = 2; j * j <= i; j++) { 
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime && a % i == 0) { 
            int k = a / i;
            for (int l = 2; l * l <= k; l++) { 
                if (k % l == 0) {
                    return false;
                }
            }
            return true;
        }
    }
    return false;
}