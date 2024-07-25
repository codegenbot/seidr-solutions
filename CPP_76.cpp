if (n == 1) {
        return x == 1;
    }
    int power = 1;
    while (power < x) {
        power *= n;
    }
    return power == x;
}