int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if ((abs(arr[i]) % 100 <= abs(arr[i])) || (abs(arr[i]) >= 10)) {
            sum += arr[i];
        }
    }
    return sum;
}