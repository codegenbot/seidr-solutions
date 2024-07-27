#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int left_sum = 0, right_sum = 0;
    int left_idx = 0, right_idx = n - 1;
    
    while (left_idx < right_idx) {
        if (left_sum < right_sum) {
            left_sum += nums[left_idx];
            ++left_idx;
        } else {
            right_sum += nums[right_idx];
            --right_idx;
        }
    }
    
    cout << "1" << endl;
    
    for (int i = 0; i < left_idx; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << "0" << endl;
    
    return 0;
}