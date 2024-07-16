if (n <= 1) {
        return false;
    }
    if (x <= 1) {
        return x == 1;
    }
    double power = log(x) / log(n);
    return (power - (int)power) == 0;
}