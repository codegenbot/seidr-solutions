vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        if (n > 0) {
            result.push_back(1);
            if (n > 1) {
                result.push_back(2);
                int prev1 = 1, prev2 = 3, current = 2;
                for (int i = 3; i <= n; ++i) {
                    int temp = (i % 2 == 0) ? 1 + i / 2 : prev1 + prev2 + current;
                    result.push_back(temp);
                    prev1 = prev2;
                    prev2 = current;
                    current = temp;
                }
            }
        }
    }
    return result;
}