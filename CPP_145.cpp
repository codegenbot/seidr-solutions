vector<int> order_by_points(vector<int> nums){
    vector<int> result;
    vector<pair<int, int>> sum_digits;

    // Calculate the sum of digits for each number and store it along with the index
    for(int i = 0; i < nums.size(); i++){
        int num = nums[i];
        int sum = 0;
        while(num != 0){
            sum += abs(num % 10);
            num /= 10;
        }
        sum_digits.push_back(make_pair(sum, i));
    }

    // Sort the sum_digits vector based on the sum of digits
    sort(sum_digits.begin(), sum_digits.end());

    // Add the numbers to the result vector based on their index in the original vector
    for(auto it = sum_digits.begin(); it != sum_digits.end(); it++){
        result.push_back(nums[it->second]);
    }

    return result;
}