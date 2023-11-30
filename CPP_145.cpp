vector<int> order_by_points(vector<int> nums){
    // Sort the vector based on the sum of their digits
    sort(nums.begin(), nums.end(), [](int a, int b){
        // Calculate the sum of digits for a and b
        int sum_a = 0, sum_b = 0;
        string str_a = to_string(abs(a));
        string str_b = to_string(abs(b));
        for(char c : str_a){
            sum_a += c - '0';
        }
        for(char c : str_b){
            sum_b += c - '0';
        }
        // If the sum of digits is equal, sort based on index
        if(sum_a == sum_b){
            return a < b;
        }
        // Sort based on the sum of digits
        return sum_a < sum_b;
    });
    return nums;
}