vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    int current_leader = nums[n - 1];
    leaders.push_back(current_leader);
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= current_leader) {
            current_leader = nums[i];
            leaders.push_back(current_leader);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> output = findLeaders(nums);
    for (int i = 0; i < output.size(); i++) {
        cout << output[i];
        if (i < output.size() - 1) {
            cout << " ";
        }
    }
    return 0;
}