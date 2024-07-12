#include <iostream>
#include <vector>

using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n - 1];
    leaders.push_back(maxRight);
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
    return vector<int>(leaders.rbegin(), leaders.rend());
}

int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    vector<int> result = findLeaders(nums);
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i] << " ";
    }
    return 0;
}