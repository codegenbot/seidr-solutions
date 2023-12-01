bool is_simple_power(int x, int n) {
    if (x < 1 || n < 2) {
        return false;
    }
    
    int power = 0;
    int result = 1;
    
    while (result <= x) {
        if (result == x) {
            return true;
        }
        
        result = pow(n, power);
        power++;
    }
    
    return false;
}