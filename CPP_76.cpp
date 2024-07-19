if (x == 1) {
        return true;
    }
    double root = pow(x, 1.0 / n);
    return (pow((int)root, n) == x);
}