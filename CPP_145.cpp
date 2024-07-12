```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(int a, int b) {
    if (a > b)
        return false;
    else if (a < b)
        return true;
    else
        return false;
}

int order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        if (!issame(nums[i], nums[i + 1]))
            return 0;
    }
    return 1;
}

int test() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = order_by_points(nums);
    for (const auto& num : result) {
        cout << num << " ";
    }
    return 0;
}

int main() {
    test();
    return 0;
}