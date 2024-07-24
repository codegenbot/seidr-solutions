#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    if (nums.size() <= 1) {
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << ' ';
        }
        cout << '\n';
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << ' ';
        }
        cout << '\n';
        return 0;
    }
    
    int n = nums.size();
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    long long prefixSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        long long suffixSum = sum - prefixSum - nums[i];
        
        if (prefixSum == suffixSum || minDiff == 0) {
            cutIndex = i;
            break;
        }
        
        int diff = abs(prefixSum - suffixSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << ' ';
    }
    cout << '\n';
    
    for (int i = cutIndex + 1; i < n; i++) {
        cout << nums[i] << ' ';
    }
    cout << '\n';
    
    return 0;
}