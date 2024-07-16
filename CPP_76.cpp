if (x == 1) return true;
    if (n == 1) return false;
    int power = 1;
    while (power < x) {
        power *= n;
    }
    return power == x;
}