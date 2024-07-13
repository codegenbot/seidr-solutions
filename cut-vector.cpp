#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int idx = 0;
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff <= minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    return {{nums.begin(), nums.begin() + idx}, {nums.begin() + idx, nums.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto& num : nums) {
        cin >> num;
    }
    auto result = cutVector(nums);
    for (auto num : result[0]) {
        cout << num << " ";
    }
    cout << endl;
    for (auto num : result[1]) {
        cout << num << " ";
    }
    return 0;
}