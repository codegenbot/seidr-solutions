int specialFilter(vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10 && to_string(num)[0] % 2 != 0 && to_string(num).back() % 2 != 0) {
            count++;
        }
    }
    return count;
}