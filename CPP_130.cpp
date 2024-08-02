vector<int> result;
    if (n >= 0) {
        if (n == 0) {
            result.push_back(0);
        } else if (n == 1) {
            result.push_back(3);
        } else {
            result.push_back(1);
            result.push_back(3);
            int a = 1, b = 3, c;
            for (int i = 2; i <= n; ++i) {
                if (i % 2 == 0) {
                    c = 1 + i / 2;
                } else {
                    c = a + b + result[i - 1];
                }
                result.push_back(c);
                a = b;
                b = c;
            }
        }
    }
    return result;