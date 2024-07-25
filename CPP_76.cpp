if (x <= 0 || n <= 0)
        return false;

    double power = log(x) / log(n);
    return fabs(power - round(power)) < 1e-9;
}