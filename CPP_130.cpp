vector<int> result;
    result.push_back(3);
    if (n == 0) {
        return result;
    }
    result.push_back(1);
    int x = 1, y = 3, z = 2;
    for (int i = 2; i <= n; ++i) {
        z = i % 2 == 0 ? 1 + i / 2 : x + y + z;
        result.push_back(z);
        x = y;
        y = z;
    }
    return result;
}