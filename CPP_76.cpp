if (x < 1 || n < 1) return false;
    double result = log(x) / log(n);
    return result == (int)result;
}