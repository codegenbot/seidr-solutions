int prod_signs(const vector<int>& arr) {
    if (arr.empty()) return -32768;
    
    int prod = 1;
    int sum = 0;
    
    for (int num : arr) {
        prod *= num > 0 ? 1 : (num < 0 ? -1 : 0);
        sum += abs(num);
    }
    
    return prod * sum;
}