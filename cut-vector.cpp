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
    int min_abs_diff = std::abs(2 * nums[0] - total_sum);
    int cut_index = 0;
    
    for (int i = 1; i < n; i++) {
        left_sum += nums[i - 1];
        if (std::abs(2 * left_sum - total_sum) < min_abs_diff) {
            min_abs_diff = std::abs(2 * left_sum - total_sum);
            cut_index = i;
        }
    }
    
    cout << cut_index << endl;
    for (int i = 0; i < cut_index; i++) {
        cout << nums[i] << " ";
    }
    cout << endl << n - cut_index << endl;
    for (int i = cut_index; i < n; i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}