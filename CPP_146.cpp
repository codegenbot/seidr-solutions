int specialFilter(vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10 && (abs(num) % 10) % 2 != 0 && to_string(num)[0] % 2 != 0 && to_string(num)[to_string(num).size() - 1] % 2 != 0) {
            count++;
        }
    }
    return count;
}