Here is the solution:

int findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int num : nums) {
        int complement = target - num;
        if (numMap.count(complement)) {
            return min(num, complement) * 2;
        }
        numMap[num] = num;
    }
    return -1; // or throw an exception
}