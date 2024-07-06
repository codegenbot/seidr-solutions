int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < min(k, (int)arr.size()); i++) {
        sum += arr[i];
    }
    return sum;
}