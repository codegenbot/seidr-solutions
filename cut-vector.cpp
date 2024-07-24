#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    vector<int> nums;
    int num;

    int temp;
    while (true) {
        cin >> temp;
        if (cin.fail()) break;
        nums.push_back(temp);
    }

    if (nums.empty()) {
        cout << "Input vector is empty." << endl;
        return 0;
    }

    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int prefix_sum = 0;
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < n; i++) {
        prefix_sum += nums[i];
        int suffix_sum = sum - prefix_sum;
        int diff = abs(prefix_sum - suffix_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    for (int i = 0; i <= cut_index; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    for (int i = cut_index + 1; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}