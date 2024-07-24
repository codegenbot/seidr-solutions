#include <iostream>
#include <climits>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;
    string line;
    
    getline(cin, line);
    istringstream iss(line);
    
    int num;
    while (getline(iss, line, ',')) {
        num = stoi(line);
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
    
    sort(nums.begin(), nums.end());
    
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
        int suffixSum = sum - prefixSum - nums[i];
        int diff = abs(prefixSum - suffixSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    if (prefixSum == sum - prefixSum) {
        cutIndex++;
    }
    
    if (cutIndex == -1) {
        for (int i = 0; i < n; i++) {
            cout << nums[i] << ' ';
        }
        cout << '\n';
        return 0;
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> subvector2(nums.begin() + cutIndex + 1, nums.end());
    
    for (int i = 0; i < subvector1.size(); i++) {
        cout << subvector1[i] << ' ';
    }
    cout << '\n';
    
    for (int i = 0; i < subvector2.size(); i++) {
        cout << subvector2[i] << ' ';
    }
    cout << '\n';
    
    return 0;
}