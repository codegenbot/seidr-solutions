vector<int> result;
    if (n == 0) {
        return result;
    }
    result.push_back(3);
    if (n == 1) {
        return result;
    }
    result.push_back(1);
    if (n == 2) {
        return result;
    }
    int prev = 1, cur = 3, next;
    for (int i = 3; i <= n; ++i) {
        if (i % 2 == 0) {
            next = 1 + i / 2;
        } else {
            next = prev + cur + 1 + (i + 1) / 2;
        }
        result.push_back(next);
        prev = cur;
        cur = next;
    }
    return result;