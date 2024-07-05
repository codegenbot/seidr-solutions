int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (arr[i] >= 0 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}