int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;
    
    if (arr.empty()) {
        return -32768; // or any other constant value that won't affect the output for non-empty arrays
    }
    
    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= abs(num);
        sum += abs(num);
    }
    
    return product * ((sum > 0) ? 1 : -1); // Return the sign of the sum
}