#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int size;
    cin >> size;
    
    vector<int> nums(size);
    
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }
    
    int prefixSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < size; i++) {
        prefixSum += nums[i];
        int suffixSum = sum - prefixSum;
        int diff = std::abs(prefixSum - suffixSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    return 0;
}