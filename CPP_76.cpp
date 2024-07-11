if (x == 1) {
        return true;
    }
    
    double result = log(x) / log(n);
    
    return (result == (int)result);
}