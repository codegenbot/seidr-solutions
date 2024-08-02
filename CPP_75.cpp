if (a < 30) return false;
    for (int i = 2; i <= a / 3; ++i) {
        for (int j = i; j <= a / 2; ++j) {
            int k = a / (i * j);
            if (i * j * k == a && i * j * k == a && i != j && j != k && i != k) {
                return true;
            }
        }
    }
    return false;
}