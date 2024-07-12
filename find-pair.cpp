#include <iostream>
#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int, int> numMap;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            result.push_back(complement);
            result.push_back(nums[i]);
            break;
        }
        numMap[nums[i]] = i;
    }

    return result;
}

int main() {
    int n, x, y;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter the target sum: ";
    cin >> x;
    vector<int> result = findPair(nums, x);
    if (!result.empty()) {
        cout << result[0] << endl << result[1] << endl;
    } else {
        cout << "-1" << endl << "-1" << endl;
    }
    return 0;
}