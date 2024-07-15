#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int currentSum = nums[left] + nums[right];
        if (currentSum == target) {
            return make_pair(left, right);
        } else if (currentSum < target) {
            left++;
        } else {
            right--;
        }
    }
    return make_pair(-1, -1);
}

int main() {
    vector<int> nums = {7044, 1615, -931, 6250, 5319};
    int target = 6250;
    pair<int, int> result = findPair(nums, target);

    if (result.first != -1 && result.second != -1) {
        cout << nums[result.first] << endl;
        cout << nums[result.second] << endl;
    } else {
        cout << "Pair not found." << endl;
    }

    return 0;
}