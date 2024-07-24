int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && to_string(abs(num)).back() % 2 != 0 && to_string(abs(num)).front() % 2 != 0) {
            count++;
        }
    }
    return count;
}