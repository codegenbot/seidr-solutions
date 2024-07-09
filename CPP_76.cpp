if (x <= 0 || n <= 0) {
        return false;
    }
    
    int root = round(pow(x, 1.0/n));
    return (pow(root, n) == x);
}