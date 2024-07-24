bool is_simple_power(int x, int n) {
    if (x == 1) {
        return true;
    }
    for (int i = 2; i * i <= x; i++) {
        int p = i, power = n;
        while (p < x) {
            p *= i;
            power *= n;
        }
        if (p == x && power == x) {
            return true;
        }
    }
    return false;
}