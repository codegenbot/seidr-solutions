#include <iostream>
#include <vector>
#include <climits>
#include <sstream>

using namespace std;

int main() {
    vector<int> nums;
    string line;
    
    getline(cin, line);
    istringstream ss(line);
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
    int minDiff = INT_MAX/2;
    int cutIndex = -1;
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        int suffixSum = (n % 2 == 0) ? sum - prefixSum : sum - prefixSum - nums[i];
        int diff = abs(prefixSum - suffixSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    cout << "2" << endl;
    
    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    for (int i = cutIndex + 1; i < n; i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}