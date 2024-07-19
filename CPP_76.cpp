if (n == 1) {
        return x == 1;
    }
    int power = log(x) / log(n);
    return pow(n, power) == x;
}