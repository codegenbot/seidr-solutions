#include <iostream>
#include <vector>
#include <numeric>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter positive integers, -1 to end input:" << endl;

    vector<int> nums;
    int num;
    
    int diff = INT_MAX;
    int idx = 0;
    
    while (cin >> num) {
        if (num == -1) {
            break;
        }
        
        nums.push_back(num);

        int left_sum = accumulate(nums.begin(), nums.begin() + idx, 0);
        int right_sum = accumulate(nums.begin() + idx, nums.end(), 0);

        if (abs(left_sum - right_sum) < diff) {
            diff = abs(left_sum - right_sum);
            ++idx;
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