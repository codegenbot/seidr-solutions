using namespace std;
vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        int left = i + 1;
        int right = nums.size() - 1;
        while (left <= right) {
            int sum = nums[i] + nums[left];
            if (sum == target) {
                result.push_back(nums[i]);
                result.push_back(nums[left]);
                return result;
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    return {-1, -1};
}