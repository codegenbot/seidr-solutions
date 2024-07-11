if (x < 1 || n < 2) {
        return false;
    }
    double power = log(x) / log(n);
    return power == (int)power;
}