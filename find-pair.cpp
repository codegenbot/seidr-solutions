using namespace std;

vector<pair<int,int>> findPair(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    vector<pair<int,int>> result;
    for (int i = 0; i < nums.size() - 1; i++) {
        int complement = target - nums[i];
        int j = i + 1;
        while (j < nums.size() && nums[j] < complement) {
            if (nums[j] + nums[i] == target) {
                result.push_back({nums[i], nums[j]});
                break;
            }
            j++;
        }
    }
    return result;
}