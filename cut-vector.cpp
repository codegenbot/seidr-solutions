#include <iostream>
#include <vector>
#include <numeric>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int total = accumulate(nums.begin(), nums.end(), 0);
    int prefix_sum = 0;
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        prefix_sum += nums[i];
        int diff = std::abs(total - 2 * prefix_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i <= cut_index; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = cut_index + 1; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}