if (x <= 0 || n <= 0) {
        return false;
    }
    
    double result = log(x) / log(n);
    return floor(result) == result;
}