int n = arr.size();
    int ans = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - 1 - i]) {
            ++ans;
        }
    }
    return ans;
}