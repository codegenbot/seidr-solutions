int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (abs(arr[i]) < 100) {
            sum += arr[i];
        }
    }
    return sum;
}