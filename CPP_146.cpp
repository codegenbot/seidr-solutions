int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num / 10) % 2 == 1 && num % 10 % 2 == 1)) {
            count++;
        }
    }
    return count;
}