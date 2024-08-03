Here is the solution:

int findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int num : nums) {
        int complement = target - num;
        if (numMap.count(complement)) {
            return min(num, complement) * 2; // return the two numbers that sum up to the target
        }
        numMap[num] = 1;
    }
    return -1; // or throw an exception as per your requirement
}