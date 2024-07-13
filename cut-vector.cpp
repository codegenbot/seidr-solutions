#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i <= n/2; i++) {
        if (abs(nums[i] - nums[n-i-1]) < minDiff) {
            minDiff = abs(nums[i] - nums[n-i-1]);
            cutIndex = i;
        }
    }
    
    return {vector<int>(nums.begin(), nums.begin() + cutIndex),
            vector<int>(nums.begin() + cutIndex, nums.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<int> result = cutVector(nums);
    
    cout << "[";
    for (auto x : result[0]) {
        cout << x << " ";
    }
    cout << "] [" << result[1][0] << "]";
    
    return 0;
}