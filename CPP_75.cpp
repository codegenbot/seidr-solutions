```cpp
bool is_multiply_prime(int a) {
    for (int i = 2; i * i <= a; ++i) {
        for (int j = 1; j * i <= a; ++j) {
            int k = 1;
            while (i*j*k <= a) {
                if (i * j * k == a) {
                    return is_prime(a);
                }
                else if (i * j * k > a) {
                    return true; // No perfect or non-perfect cube division
                }
                k++;
            }
        }
    }
    return true; // No such division is found
}

bool is_prime(int a) {
    if (a <= 1) {
        return false;
    }
    for (int x = 2; x * x <= a; ++x) {
        if (a % x == 0) {
            return false;
        }
    }
    return true;
}