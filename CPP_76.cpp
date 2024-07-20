if (n <= 1 || x <= 0) {
        return false;
    }

    double result = log(x) / log(n);
    return abs(result - round(result)) < 1e-9;
}