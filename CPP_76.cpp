if (n == 1 && x == 1) return true;
    if (n == 1) return false;
    if (x == 1) return true;
    double res = log(x) / log(n);
    return (res == (int)res);
}