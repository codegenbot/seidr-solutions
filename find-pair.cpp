Here is the solution:

int findPair(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for (int num : nums) {
        int complement = target - num;
        if (map.find(complement) != map.end()) {
            return min(num, complement);
        }
        map[num] = 1;
    }
    return -1; // not found
}