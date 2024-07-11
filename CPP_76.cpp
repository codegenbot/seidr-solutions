if (n == 1) {
        return x == 1;
    }
    int power = 0;
    while (pow(n, power) <= x) {
        if (pow(n, power) == x) {
            return true;
        }
        power++;
    }
    return false;
}