if (n <= 1) {
        return false;
    }
    double res = log(x) / log(n);
    return (res == (int)res);
}