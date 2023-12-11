```cpp
vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> result;
    int current_leader = nums[n-1];
    result.push_back(current_leader);
    for (int i = n-2; i >= 0; i--) {
        if (nums[i] >= current_leader) {
            current_leader = nums[i];
            result.push_back(current_leader);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}
```