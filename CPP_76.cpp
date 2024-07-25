if (n == 1 && x != 1) {
        return false;
    }
    if (n == 1 && x == 1) {
        return true;
    }
    double power = log(x) / log(n);
    return (pow(n, int(power)) == x);
}