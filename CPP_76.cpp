if (n == 1 && x == 1) {
        return true;
    }
    
    int power = 1;
    while (pow(n, power) <= x) {
        if (pow(n, power) == x) {
            return true;
        }
        power++;
    }
    
    return false;
}