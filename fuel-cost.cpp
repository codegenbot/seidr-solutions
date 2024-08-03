Here is the solution:

int solve(const vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        int new_num = static_cast<int>(floor((double)num / 3)) - 2;
        sum += new_num;
    }
    return sum;
}