#include <iostream>
#include <vector>
using namespace std;

vector<int> cutVector(vector<int> nums) {
    int n = nums.size();
    int mid = n / 2;
    int left_sum = 0;
    int right_sum = 0;

    for (int i = 0; i < mid; i++) {
        left_sum += nums[i];
    }

    for (int i = mid; i < n; i++) {
        right_sum += nums[i];
    }

    if (left_sum == right_sum) {
        return {nums.begin(), nums.begin() + mid, nums.end() - mid};
    }

    int diff = abs(left_sum - right_sum);

    while (mid > 0 && diff >= abs(left_sum - right_sum)) {
        mid--;
        left_sum += nums[mid];
        right_sum -= nums[mid];
    }

    return {nums.begin(), nums.begin() + mid, nums.end() - mid};
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> left, right;
    left = cutVector(nums);
    right = {nums.begin() + left.size(), nums.end()};

    for (int num : left) {
        cout << num << endl;
    }

    for (int num : right) {
        cout << num << endl;
    }

    return 0;
}