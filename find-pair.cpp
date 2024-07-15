#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1, -1);
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    pair<int, int> result = findPair(nums, target);

    if (result.first != -1 && result.second != -1) {
        cout << nums[result.first] << endl;
        cout << nums[result.second] << endl;
    } else {
        cout << "Pair not found." << endl;
    }

    return 0;
}