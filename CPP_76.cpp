bool is_simple_power(int x, int n) {
    if (x == 1) {
        return true;
    }
    if (n == 1) {
        return false;
    }
    int power = 1;
    while (power <= x) {
        if (power == x) {
            return true;
        }
        power *= n;
    }
    return false;
}