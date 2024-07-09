int sumOfUniqueNumbers(vector<int> nums) {
    set<int> uniqueNums(nums.begin(), nums.end());
    int total = 0;
    for (int num : uniqueNums) {
        int count = 0;
        for (int i : nums) {
            if (i == num)
                count++;
        }
        if (count > 1) continue;
        total += num;
    }
    return total;
}