bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    if (x == 1) {
        return true;
    }
    for (int i = 2; i * i <= x; i++) {
        int p = i;
        while (p <= x) {
            if (p == x) {
                return true;
            }
            p *= i;
        }
    }
    return false;
}