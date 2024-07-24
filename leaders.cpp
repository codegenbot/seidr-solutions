int n = nums.size();
int maxRight = nums[n-1];
vector<int> leaders;

for (int i = n-2; i >= 0; i--) {
    if (nums[i] >= maxRight) {
        maxRight = nums[i];
        leaders.push_back(maxRight);
    }
}