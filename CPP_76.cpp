if (x <= 0 || n <= 0)
        return false;

    double root = pow(x, 1.0 / n);
    int rounded_root = round(root);

    return pow(rounded_root, n) == x;
}