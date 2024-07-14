#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    return {vector<int>(nums.begin(), nums.begin() + splitIndex), vector<int>(nums.begin() + splitIndex, nums.end())};
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    auto res = cutVector(nums);

    cout << res[0].size();
    for (auto x : res[0]) {
        cout << " " << x;
    }
    cout << endl;

    cout << res[1].size();
    for (auto x : res[1]) {
        cout << " " << x;
    }
    cout << endl;

    return 0;
}