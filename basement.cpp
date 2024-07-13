int firstNegative(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += arr[j];
        }
        if (sum < 0) return i;
    }
    return -1;
}