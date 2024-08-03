#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    vector<int> nums;
    int num, n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int half_sum = sum / 2;
    int prefix_sum = 0;
    int cut_index = -1;
    int min_diff = INT_MAX; // Initialize min_diff
    
    for (int i = 0; i < n; i++) {
        prefix_sum += nums[i];
        int current_diff = std::abs(2 * prefix_sum - sum);
        if (current_diff < min_diff) {
            min_diff = current_diff;
            cut_index = i;
        }
    }
    
    cout << "2" << endl;
    for (int i = 0; i <= cut_index; i++) {
        cout << nums[i] << endl;
    }
    cout << "0" << endl;
    
    return 0;
}