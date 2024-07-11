vector<int> result;
    if (n == 0) {
        result.push_back(0);
    } else if (n == 1) {
        result.push_back(3);
    } else {
        result.push_back(1);
        int a = 1, b = 3, c = 2;
        for (int i = 3; i <= n; ++i) {
            int next;
            if (i % 2 == 0) {
                next = 1 + i / 2;
            } else {
                next = a + b + c;
                a = b;
                b = c;
                c = next;
            }
            result.push_back(next);
        }
    }
    return result;
}