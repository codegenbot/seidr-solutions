#include <vector>
#include <iostream>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (abs(nums[i] - nums[0]) <= minDiff) {
            minDiff = abs(nums[i] - nums[0]);
            splitIndex = i;
        }
    }
    vector<int> left = {nums[0]};
    vector<int> right = nums;
    right.erase(right.begin() + splitIndex);
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto& num : nums) {
        cin >> num;
    }
    pair<vector<int>, vector<int>> result = cutVector(nums);
    std::cout << "1 ";
    for (const auto& num : result.second) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;