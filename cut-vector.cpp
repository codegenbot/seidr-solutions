#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int left_sum = 0, right_sum = 0;
    int left_idx = 0, right_idx = n - 1;

    while (left_idx < right_idx) {
        if (left_sum < right_sum) {
            left_sum += nums[left_idx++];
        } else {
            right_sum += nums[right_idx--];
        }
    }

    cout << left_idx << endl;
    for (int i = 0; i < left_idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << right_sum << endl;
    for (int i = right_idx + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}