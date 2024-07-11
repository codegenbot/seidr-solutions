if (x <= 0 || n <= 0) {
        return false;
    }
    
    double result = log(x) / log(n);
    
    if (result == (int)result) {
        return true;
    } else {
        return false;
    }
}