if (x <= 0 || n <= 0) {
        return false;
    }

    int power = round(pow(x, 1.0 / n));
    return pow(power, n) == x;
}