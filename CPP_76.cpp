bool is_simple_power(int x, int n){
    if (n < 2) {
        return false;
    }
    while (x > 1) {
        if (x % n != 0) {
            return false;
        }
        x /= n;
    }
    return true;
}