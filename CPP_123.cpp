vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    result.erase(remove_if(result.begin(), result.end(), [](int x) { return x % 2 == 0; }), result.end());
    sort(result.begin(), result.end());
    return result;