vector<int> result;
    if (n == 0) {
        result.push_back(0);
        return result;
    }
    if (n == 1) {
        result.push_back(3);
        return result;
    }
    result.push_back(3);
    result.push_back(1);
    int a = 3, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            c = 1 + i / 2;
        } else {
            c = a + b + 1;
        }
        result.push_back(c);
        a = b;
        b = c;
    }
    return result;
}