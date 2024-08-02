#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end());
    return nums;
}