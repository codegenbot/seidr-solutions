vector<int> order_by_points(vector<int> nums){
    vector<int> sorted_nums;
    vector<pair<int, int>> sum_digits;

    for(int i=0; i<nums.size(); i++){
        int num = nums[i];
        int sum = 0;

        // calculate sum of digits
        while(num != 0){
            sum += abs(num % 10);
            num /= 10;
        }

        sum_digits.push_back(make_pair(sum, i));
    }

    // sort the sum_digits vector
    sort(sum_digits.begin(), sum_digits.end());

    // create sorted_nums vector based on sorted sum_digits vector
    for(int i=0; i<sum_digits.size(); i++){
        int index = sum_digits[i].second;
        sorted_nums.push_back(nums[index]);
    }

    return sorted_nums;
}