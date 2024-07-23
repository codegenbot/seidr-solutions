int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int x : nums) {
        int num = x;
        if ((num > 0 ? num : -num) > 10 && (num % 10) % 2 != 0 && (abs(num) / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}