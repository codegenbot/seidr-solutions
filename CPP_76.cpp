bool is_simple_power(int x, int n) {
    if (x == 1) {
        return true;
    }
    
    for (int power = 2; pow(n, power) <= x; power++) {
        if (pow(n, power) == x) {
            return true;
        }
    }
    
    return false;
}