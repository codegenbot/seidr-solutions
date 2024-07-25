#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

vector<int> nums;
int cut_index;

int main() {
    int n;
    cin >> n;
    nums.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int min_diff = INT_MAX;
    cut_index = 0;
    for (int i = 1; i < n; ++i) {
        int left_sum = accumulate(nums.begin(), nums.begin() + i, 0);
        int right_sum = accumulate(nums.begin() + i, nums.end(), 0);
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        cout << nums[i] << "\n";
    }
    cout << 0 << "\n";
    for (int i = cut_index; i < n; ++i) {
        cout << nums[i] << "\n";
    }
    cout << 0 << "\n";
    
    return 0;
}