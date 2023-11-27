bool is_simple_power(int x, int n) {
    if (n == 1) {
        if (x == 1) {
            return true;
        } else {
            return false;
        }
    }
    int power = log(x) / log(n);
    if (pow(n, power) == x) {
        return true;
    } else {
        return false;
    }
}