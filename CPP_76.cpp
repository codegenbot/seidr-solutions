if (x == 1) {
        return true;
    }
    double power = log(x) / log(n);
    return (power == int(power));
}