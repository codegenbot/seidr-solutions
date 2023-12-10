#include <vector>
#include <iostream>
using namespace std;

/*
Given a vector of integers, return the two elements that sum to a target integer.
*/
vector<int> findPair(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return vector<int>{nums[i], nums[j]};
            }
        }
    }
    return vector<int>();
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;
    vector<int> result = findPair(nums, target);
    if (!result.empty()) {
        cout << "The two elements that sum to " << target << " are: ";
        for (auto& num : result) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}