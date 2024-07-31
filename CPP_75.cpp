if (a < 2 || a > 100) {
        return false;
    }
    
    for (int i = 2; i <= a / 2; ++i) {
        if (a % i == 0) {
            return false;
        }
    }
    
    return true;
}