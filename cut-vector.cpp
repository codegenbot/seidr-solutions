#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void cutVector(const vector<int>& nums) {
    int n = nums.size();
    int cutIndex = min_element(nums.begin(), nums.end(), [](int a, int b) { return abs(a - b) < 1; }) - nums.begin();  
    for (int i = 0; i < cutIndex; i++) cout << nums[i] << " ";
    cout << endl;
    for (int i = cutIndex; i < n; i++) cout << nums[i] << " ";
    cout << endl;
}

int main() {
    vector<int> nums = {6310, 2545, 5656, 5646};
    cutVector(nums);
    return 0;
}