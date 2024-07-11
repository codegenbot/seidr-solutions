if (x < 1 || n < 2) {
        return false;
    }
    double root = pow(x, 1.0/n);
    return (pow(round(root), n) == x);
}