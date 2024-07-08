#include <vector>
#include <iostream>
#include <initializer_list>
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
    return {vector<int>(nums.begin(), pos+1), vector<int>(nums.begin() + pos + 1, nums.end())};
}

int main() {
    int n;
    cin >> n;
    if(n < 1) {
        cout << "Input integer should be greater than 0." << endl;
        return -1;
    }
    vector<int> nums(n);
    for (auto &num : nums) {
        cin >> num;
        if(num < 1) {
            cout << "Input integers should be positive." << endl;
            return -1;
        }
    }
    vector<int> result = cutVector(nums);
    cout << "[";
    for (auto it = result[0].begin(); it != result[0].end(); ++it) {
        cout << *it << " ";
    }
    cout << "] [";
    for (auto it = result.at(1).begin(); it != result.at(1).end(); ++it) {
        cout << *it << " ";
    }
    cout << "] ]" << endl;
    return 0;
}