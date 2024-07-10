int add_elements(std::vector<int> arr, int k) {
    if(k > arr.size()) {
        k = arr.size();
    }
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (std::to_string(arr[i]).size() <= 2) { 
            sum += arr[i];
        }
    }
    return sum;
}