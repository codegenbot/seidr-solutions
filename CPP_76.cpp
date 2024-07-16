if (x < 1 || n < 2) {
        return false;
    }
    
    double result = log(x) / log(n);
    return (result == (int)result);
}