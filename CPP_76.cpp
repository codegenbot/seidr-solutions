if (x < 1 || n < 2) return false;
    double res = log(x) / log(n);
    return (floor(res) == res);
}