#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findPair(vector<int> nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1, -1);
}