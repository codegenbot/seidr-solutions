#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> nums;
    int num;

    while (cin >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    int diff = INT_MAX;
    int idx = -1;

    for (int i = 1; i < n; ++i) {
        int left_sum = 0, right_sum = 0;

        for (int j = 0; j < i; ++j) {
            left_sum += nums[j];
        }

        for (int j = i; j < n; ++j) {
            right_sum += nums[j];
        }

        if (std::abs(left_sum - right_sum) < diff) {
            diff = std::abs(left_sum - right_sum);
            idx = i;
        }
    }

    for (int i = 0; i < idx; ++i) {
        cout << nums[i] << "\n";
    }

    cout << "0\n";

    for (int i = idx; i < n; ++i) {
        cout << nums[i] << "\n";
    }

    cout << "0\n";

    return 0;
}