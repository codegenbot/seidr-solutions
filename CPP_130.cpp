vector<int> tri(int n) {
    vector<int> result(1, 3);
    if (n > 0) {
        for (int i = 1; i < n; i++) {
            int val;
            if (i % 2 == 0) {
                val = 1 + i / 2;
            } else {
                int prev1 = result[i-1];
                int prev2 = result[i-2];
                int next1 = result[0] + result[1] + result[2];
                val = prev1 + prev2 + next1;
            }
            result.push_back(val);
        }
    }
    return result;
}