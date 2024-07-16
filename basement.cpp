int basement(std::vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j <= i; ++j) {
            sum += arr[j];
            if (sum < 0) {
                return j;
            }
        }
    }
    return -1;
}