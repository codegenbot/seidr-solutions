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
    int i = 0;
    
    while (cin >> num) {
        nums.push_back(num);

        int left_sum = accumulate(nums.begin(), nums.begin() + i, 0);
        int right_sum = accumulate(nums.begin() + i, nums.end(), 0);
        
        if (abs(left_sum - right_sum) < diff) {
            diff = abs(left_sum - right_sum);
            idx = i;
        }
        
        i++;
    }
    
    for (int j = 0; j < idx; ++j) {
        cout << nums[j] << endl;
    }
    
    cout << endl;
    
    for (int j = idx; j < nums.size(); ++j) {
        cout << nums[j] << endl;
    }
    
    return 0;
}