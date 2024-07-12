#include <iostream>
#include <vector>
#include <climits>
#include <sstream>

using namespace std;

int main() {
    vector<int> nums;
    string line;
    
    // Read input
    getline(cin, line);
    istringstream ss(line);
    int num;
    while (ss >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    
    // Calculate total sum of the vector
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int prefixSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    // Find the cut index with minimum difference
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        int suffixSum = sum - prefixSum;
        int diff = abs(prefixSum - suffixSum);
        
        if (diff < minDiff || (diff == minDiff && abs(2 * prefixSum - sum) <= abs(2 * (prefixSum - nums[i]) - sum))) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    // Output the subvectors
    if (cutIndex == 0 || cutIndex == n - 1) {
        cout << "2" << endl;
        cout << cutIndex + 1 << " " << n - cutIndex << endl;
        for (int i = 0; i <= cutIndex; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
        for (int i = cutIndex + 1; i < n; i++) {
            cout << nums[i] << " ";
        }
    } else {
        cout << "2" << endl;
        cout << cutIndex + 1 << " " << n - cutIndex << endl;
        for (int i = 0; i < cutIndex; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
        for (int i = cutIndex; i < n; i++) {
            cout << nums[i] << " ";
        }
    }
    
    return 0;
}