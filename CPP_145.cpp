vector<int> order_by_points(vector<int> nums){
    // Sort the vector in ascending order
    sort(nums.begin(), nums.end());
    
    // Sort the vector based on the sum of their digits
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        if (a < 0) a *= -1;
        if (b < 0) b *= -1;
        
        while (a > 0) {
            sum_a += a % 10;
            a /= 10;
        }
        
        while (b > 0) {
            sum_b += b % 10;
            b /= 10;
        }
        
        return sum_a < sum_b;
    });
    
    return nums;
}