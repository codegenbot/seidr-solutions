int findFirstNegativeIndex(const vector<int>& nums) {
    int sum = 0;
    int index = -1;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            index = i;
            break;
        }
    }

    return index;
}