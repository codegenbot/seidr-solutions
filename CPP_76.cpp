if (n == 1) {
    return x == 1;
}

int root = round(pow(x, 1.0 / n));
return pow(root, n) == x;
}