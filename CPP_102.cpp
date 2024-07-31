if (x % 2 != 0) {
        x++;
    }
    if (y % 2 != 0) {
        y--;
    }
    
    if (x > y) {
        return -1;
    }
    
    return y;
}