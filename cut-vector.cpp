#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <sstream>

using namespace std;

int main() {
    vector<int> nums;
    string input;
    
    getline(cin, input);
    stringstream ss(input);
    int num;
    
    while (ss >> num) {
        nums.push_back(num);
    }
    
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
        int diff = abs(sum - 2*prefixSum);
        
        if (diff == 0) {
            cutIndex = i;
            break;
        }
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << ' ';
    }
    cout << '\n';
    
    for (int i = cutIndex; i < n; i++) {
        cout << nums[i] << ' ';
    }

    return 0;
}