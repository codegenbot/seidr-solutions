int specialFilter(vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string num_str = to_string(num);
            if ((num_str.front() - '0') % 2 != 0 && (num_str.back() - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}