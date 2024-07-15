if (x == 1) {
        return true;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (pow(i, n) == x) {
            return true;
        }
    }
    return false;
}