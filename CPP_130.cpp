vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        if (n > 0) {
            result.push_back(n % 2 == 0 ? 1 + n / 2 : 3);
            if (n > 1) {
                int t0 = 3, t1 = n % 2 == 0 ? 1 + n / 2 : 3, t2 = 0;
                for (int i = 2; i <= n; ++i) {
                    t2 = t0 + t1 + t2;
                    result.push_back(t2);
                    t0 = t1;
                    t1 = t2;
                }
            }
        }
    }
    return result;