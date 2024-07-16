if (x <= 0 || n <= 0) {
        return false;
    }
    
    double result = log(x) / log(n);
    
    return (result == (int)result);
}