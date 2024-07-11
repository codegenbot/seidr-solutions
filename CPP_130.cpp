vector<int> ans(n+1);
    ans[1] = 3;
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            ans[i] = 1 + i / 2;
        } else {
            ans[i] = ans[i - 1] + ans[i - 2] + ans[i + 1];
        }
    }
    return ans;
}