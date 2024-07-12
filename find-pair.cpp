vector<int> findPair(vector<int> nums, int target) {
    map<int, int> numIdx;
    vector<int> result;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIdx.find(complement) != numIdx.end()) {
            result.push_back(complement);
            result.push_back(nums[i]);
            return result;
        }
        numIdx[nums[i]] = i;
    }
    return result;
}
int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> target;
    vector<int> result = findPair(nums, target);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << endl;
    }
    return 0;
}