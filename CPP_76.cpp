if (x <= 0 || n <= 0) return false;
    double res = pow(x, 1.0 / n);
    return pow(round(res), n) == x;
}