if (x <= 0 || n <= 0) {
        return false;
    }

    int power = log(x) / log(n);
    return pow(n, power) == x;
}