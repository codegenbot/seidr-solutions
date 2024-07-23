#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    do {
        if (!(cin >> num)) {
            break;
        }
        nums.push_back(num);
    } while (true);
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int prefixSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        int suffixSum = sum - prefixSum;
        int diff = abs(prefixSum - suffixSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << '\n';
    }
    
    cout << 0 << '\n';
    
    for (int i = cutIndex + 1; i < n; i++) {
        cout << nums[i] << '\n';
    }

    return 0;
}