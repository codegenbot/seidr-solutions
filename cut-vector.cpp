#include <iostream>
#include <vector>
#include <numeric>
#include <climits>
#include <cmath>
using namespace std;

void findCutIndex(vector<int>& nums) {
    int n = nums.size();
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        int rightSum = totalSum - leftSum;
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    cout << "Subvector 1: ";
    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Subvector 2: ";
    for (int i = cutIndex + 1; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums;
    int num;
    cout << "Enter positive integers to form a vector (enter -1 to stop): ";
    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        nums.push_back(num);
    }

    findCutIndex(nums);
    
    return 0;
}