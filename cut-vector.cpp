#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    vector<int> nums;
    int n;
    cout << "Enter positive integers. Press Ctrl+D (EOF) when done.\n";
    while (cin >> n) {
        nums.push_back(n);
    }
    
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int halfSum = sum / 2;
    
    int currSum = 0, idx = 0;
    for (idx = 0; idx < nums.size(); idx++) {
        currSum += nums[idx];
        if (currSum >= halfSum) {
            break;
        }
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + idx + 1);
    vector<int> subvector2(nums.begin() + idx + 1, nums.end());
    
    for (int num : subvector1) {
        cout << num << endl;
    }
    for (int num : subvector2) {
        cout << num << endl;
    }
    
    return 0;
}