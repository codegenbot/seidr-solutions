bool is_simple_power(int x, int n) {
    if (x < 1)
        return false;
    int temp = round(pow(n, 1.0));
    while (temp <= x) {
        if (temp == x)
            return true;
        temp *= n;
    }
    return false;
}