#include <iostream>
#include <vector>
#include <numeric>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    int diff = INT_MAX;
    int idx = -1;
    
    while (cin >> num) {
        if (num == -1) {
            break;
        }
        
        nums.push_back(num);

        int left_sum = accumulate(nums.begin(), nums.begin() + nums.size(), 0);
        int right_sum = accumulate(nums.begin() + nums.size(), nums.end(), 0);

        if (abs(left_sum - right_sum) < diff) {
            diff = abs(left_sum - right_sum);
            idx = nums.size();
        }
    }
    
    for (int i = 0; i < idx; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << endl;
    
    for (int i = idx; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}