```
#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
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
    for (auto num : result[0]) {
        cout << num << " ";
    }
    cout << endl;
    for(int num : result[1]) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}