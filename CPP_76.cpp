bool is_simple_power(int x, int n) {
    if (x == 1) {
        return true;
    }

    int power = 0;
    while (pow(n, power) <= x) {
        if (pow(n, power) == x) {
            return true;
        }
        power++;
    }

    return false;
}