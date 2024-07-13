#include <iostream>
#include <vector>

using namespace std;

void cutVector(const vector<int>& nums) {
    int n = nums.size();
    int cutIndex = n / 2;
    for (int i = 0; i <= cutIndex; i++) cout << nums[i] << " ";
    cout << endl;
    for (int i = cutIndex + 1; i < n; i++) cout << nums[i] << " ";
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    cutVector(nums);
    return 0;
}