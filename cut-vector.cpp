#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int sum = 0, halfSum = 0;
    for (int num : nums) {
        sum += num;
    }
    halfSum = sum / 2;
    
    int currSum = 0, idx = 0;
    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i];
        if (currSum >= halfSum) {
            idx = i;
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