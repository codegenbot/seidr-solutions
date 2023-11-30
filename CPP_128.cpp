int prod_signs(vector<int> arr) {
    if (arr.empty()) {
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        int sign;
        
        if (arr[i] > 0) {
            sign = 1;
        } else if (arr[i] < 0) {
            sign = -1;
        } else {
            sign = 0;
        }
        
        product *= sign;
        sum += abs(arr[i]);
    }
    
    return product * sum;
}