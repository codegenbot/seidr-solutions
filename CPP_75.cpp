bool is_multiply_prime(int a) {
    if (a < 30) return false;
    for (int i = 2; i <= static_cast<int>(sqrt(a)); ++i) {
        if (a % i == 0) {
            int j = a / i;
            if (i * j == a && i != j) {
                return true;
            }
        }
    }
    return false;
}