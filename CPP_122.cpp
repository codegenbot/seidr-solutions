int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    int limit = std::min(k, (int)arr.size()); 
    for (int i = 0; i < limit; i++) { 
        if (arr[i] < 10) { 
            sum += arr[i];
        }
    }
    return sum;
}