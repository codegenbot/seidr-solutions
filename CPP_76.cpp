if (x <= 0 || n <= 0) {
        return false;
    }
    
    double res = log(x) / log(n);
    return (res - (int)res) == 0;
}