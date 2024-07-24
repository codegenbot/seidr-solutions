int cut_index = 0;
int n = nums.size();

void cut_vector(const vector<int> &nums) {
    for (int i = cut_index + 1; i < n; i++) {
        cout << nums[i] << " ";
    }
}