```cpp
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<int> left(n), right(n);

    left[0] = nums[0];
    for (int i = 1; i < n; i++) {
        left[i] = left[i-1] + nums[i];
    }

    right[n-1] = nums[n-1];
    for (int i = n-2; i >= 0; i--) {
        right[i] = right[i+1] + nums[i];
    }

    int diff = abs(left[0] - right[1]);
    int idx = 0;
    for (int i = 1; i < n-1; i++) {
        int currDiff = abs(left[i] - right[i+1]);
        if (currDiff < diff) {
            diff = currDiff;
            idx = i;
        }
    }

    vector<int> subvector1(nums.begin(), nums.begin() + idx + 1);
    vector<int> subvector2(nums.begin() + idx + 1, nums.end());

    subvector1.push_back(0);
    subvector2.insert(subvector2.begin(), 0);

    return {subvector1, subvector2};
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> subvector1, subvector2;
    tie(subvector1, subvector2) = cutVector(nums);

    for (int i = 0; i < subvector1.size(); i++) {
        cout << subvector1[i] << endl;
    }

    for (int i = 0; i < subvector2.size(); i++) {
        cout << subvector2[i] << endl;
    }

    return 0;
}
```