vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        if (n >= 1) {
            result.push_back(1);
            if (n >= 2) {
                result.push_back(2);
                int prev1 = 1, prev2 = 3, curr = 2;
                for (int i = 3; i <= n; ++i) {
                    if (i % 2 == 0) {
                        curr = 1 + i / 2;
                    } else {
                        curr = prev1 + prev2 + result[i - 1];
                    }
                    result.push_back(curr);
                    prev1 = prev2;
                    prev2 = curr;
                }
            }
        }
    }
    return result;
}