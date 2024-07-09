int findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numToIndex.find(complement) != numToIndex.end()) {
            return min(nums[i], complement) * 10000 + max(nums[i], complement);
        }
        numToIndex[nums[i]] = i;
    }
    return -1; // not found
}

int main() {
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << findPair({a, b}, b) << endl;
    }
    return 0;
}