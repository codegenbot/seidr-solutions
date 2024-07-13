#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int n;
cin >> n;
vector<int> nums(n);
for (int i = 0; i < n; i++) {
    cin >> nums[i];
}

int cutIndex = 0;
int minDiff = abs(nums[0] - accumulate(nums.begin() + 1, nums.end(), 0));

for (int i = 1; i < n; i++) {
    int diff = abs(accumulate(nums.begin(), nums.begin() + i, 0) - accumulate(nums.begin() + i, nums.end(), 0));
    if (diff < minDiff) {
        minDiff = diff;
        cutIndex = i;
    }
}

for (int i = 0; i <= cutIndex; i++) {
    cout << nums[i] << " ";
}
cout << endl;

for (int i = cutIndex + 1; i < n; i++) {
    cout << nums[i] << " ";
}
cout << endl;