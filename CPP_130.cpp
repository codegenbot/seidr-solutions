vector<int> result;
    if (n >= 0) {
        if (n == 0) {
            result.push_back(0);
        } else {
            result.push_back(3);
            if (n > 1) {
                result.push_back(1);
                if (n > 2) {
                    result.push_back(2);
                    int prev1 = 1, prev2 = 3, prev3 = 2, current;
                    for (int i = 3; i <= n; ++i) {
                        current = (i % 2 == 0) ? 1 + i / 2 : prev1 + prev2 + prev3;
                        result.push_back(current);
                        prev1 = prev2;
                        prev2 = prev3;
                        prev3 = current;
                    }
                }
            }
        }
    }
    return result;