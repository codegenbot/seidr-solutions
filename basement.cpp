int basement(vector<int> arr) {
    int total = 0;
    for (int i = 0; i < arr.size(); i++) {
        total += arr[i];
        if (total < 0) return i;
    }
    return -1;
}