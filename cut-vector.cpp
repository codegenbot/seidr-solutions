#include <iostream>
#include <vector>
#include<fstream>
using namespace std;

int main() {
    ifstream file("input.txt");
    vector<int> nums;
    int num;

    while (file >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int half_sum = sum / 2;
    if (sum % 2 != 0) {
        half_sum++;
    }

    int min_diff = INT_MAX;
    int cut_idx = -1;
    int prefix_sum = 0;

    for (int i = 0; i < n; i++) {
        if (abs(2 * prefix_sum - sum) < min_diff) {
            min_diff = abs(2 * prefix_sum - sum);
            cut_idx = i;
        }
        prefix_sum += nums[i];
    }

    vector<int> subvec1(nums.begin(), nums.begin() + cut_idx + 1);
    vector<int> subvec2(nums.begin() + cut_idx + 1, nums.end());

    for (int num : subvec1) {
        cout << num << endl;
    }
    for (int num : subvec2) {
        cout << num << endl;
    }

    return 0;
}