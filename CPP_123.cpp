vector<int> result;
    if (n < 1) {
        return result;
    }
    result.push_back(1);
    while (n != 1) {
        if (n % 2 == 1) {
            result.push_back(n);
        }
        n = (n % 2) ? 3 * n + 1 : n / 2;
    }
    sort(result.begin(), result.end());
    return result;
}