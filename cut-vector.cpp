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
    
    while (!cin.eof() && cin >> num) {
        nums.push_back(num);

        int len = nums.size();
        int left_sum = accumulate(nums.begin(), nums.begin() + len, 0);
        int right_sum = accumulate(nums.begin() + len, nums.end(), 0);

        if (abs(left_sum - right_sum) < diff) {
            diff = abs(left_sum - right_sum);
            idx = len;
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