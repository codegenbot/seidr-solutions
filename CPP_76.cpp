if (x <= 0 || n <= 0) {
        return false;
    }

    double power = log(x) / log(n);
    return floor(power) == power;
}