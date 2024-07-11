if (n == 1) {
        return x == 1;
    }
    
    double result = log(x) / log(n);
    return (result - (int)result) == 0;
}