if (x <= 0 || n <= 0) {
        return false;
    }
    
    int power = 1;
    while (power < x) {
        power *= n;
    }
    
    return power == x;
}