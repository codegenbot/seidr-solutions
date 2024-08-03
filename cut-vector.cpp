#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<int> nums;
    int num, n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
    
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += nums[i];
    }
    
    int left_sum = 0;
    int cut_index = -1;
    int min_abs_diff = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        left_sum += nums[i];
        int right_sum = total_sum - left_sum;
        int abs_diff = abs(left_sum - right_sum);
        
        if (abs_diff < min_abs_diff) {
            min_abs_diff = abs_diff;
            cut_index = i;
        }
    }
    
    cout << cut_index + 1 << endl;
    for (int i = 0; i <= cut_index; i++) {
        cout << nums[i] << " ";
    }
    cout << endl << n - cut_index << endl;
    for (int i = cut_index + 1; i < n; i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}