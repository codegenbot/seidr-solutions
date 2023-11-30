vector<int> order_by_points(vector<int> nums){
    sort(nums.begin(), nums.end(), [](int a, int b){
        int sum_a = 0, sum_b = 0;
        string str_a = to_string(abs(a));
        string str_b = to_string(abs(b));
        
        for(char c : str_a){
            sum_a += c - '0';
        }
        
        for(char c : str_b){
            sum_b += c - '0';
        }
        
        if(sum_a == sum_b){
            return a < b;
        }
        
        return sum_a < sum_b;
    });
    
    return nums;
}