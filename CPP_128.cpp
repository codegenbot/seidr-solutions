int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;
    
    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= abs(num);
        sum += abs(num);
    }
    
    if (arr.empty()) {
        // Handle empty array case
        if (sum != 0) {
            return -32768;
        } else {
            return 1; 
        }
    } else {
        return product / (sum > 0 ? 1 : -1);
    }
}