#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end());
    return nums;
}

int main() {
vector<int> nums = {123, 456, 789, 321, 654};
vector<int> ordered_nums = order_by_points(nums);

for (int num : ordered_nums) {
    cout << num << " ";
}
return 0;
}