int can_arrange(vector<int> arr) {
    int n = arr.size();
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            return i - 1;
        }
    }
    return -1;
}