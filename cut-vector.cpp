#include <vector>
#include <iostream>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int pos = -1;
    for (int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    return {vector<int>(nums.begin(), pos+1), vector<int>(pos, nums.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &num : nums) {
        cin >> num;
    }
    vector<int> result = cutVector(nums);
    cout << "[";
    for (int num : vector<int>(result[0])) {
        cout << num << " ";
    }
    cout << "] [";
    for (auto num : result[1]) {
        cout << num << " ";
    }
    cout << "] ]" << endl;
    return 0;
}