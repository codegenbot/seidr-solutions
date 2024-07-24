#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    vector<int> nums;
    int temp;
    while (cin >> temp) {
        nums.push_back(temp);
    }

    int n = nums.size();
    if(n == 1) {
        cout << nums[0] << endl;
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int prefix_sum = 0;
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 1; i < n; i++) {
        prefix_sum += nums[i - 1];
        int suffix_sum = sum - prefix_sum;
        int diff = abs(prefix_sum - suffix_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i - 1;
        }
    }

    if (cut_index == -1 || prefix_sum == sum - prefix_sum) {
        for (int i = 0; i < n; i++) {
            cout << nums[i] << " ";
        }
    } else {
        for (int i = 0; i <= cut_index; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
        for (int i = cut_index + 1; i < n; i++) {
            cout << nums[i] << " ";
        }
    }

    return 0;
}