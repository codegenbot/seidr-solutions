if (x == 1)
        return true;
        
    int power = 1;
    while (power < x) {
        power *= n;
    }
    
    return power == x;
}