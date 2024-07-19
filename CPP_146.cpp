int specialFilter(vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10 && num % 2 != 0 && abs(to_string(num)[0] - '0') % 2 != 0 && abs(to_string(num).back() - '0') % 2 != 0) {
            count++;
        }
    }
    return count;
}