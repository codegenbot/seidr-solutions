bool is_simple_power(int x, int n) {
    if (x == 1) {
        return true;
    }
    
    for (int i = 2; i <= sqrt(x); i++) {
        int temp = x;
        while (temp % i == 0) {
            temp /= i;
        }
        if (temp == 1) {
            return true;
        }
    }
    
    return false;
}