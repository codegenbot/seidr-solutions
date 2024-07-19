Here is the solution:

int specialFilter(vector<int> nums) {
    int count = 0;
    for (auto num : nums) {
        if (num > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}