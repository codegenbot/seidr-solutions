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
        
        if (diff < minDiff || (diff == minDiff && abs(2 * prefixSum - sum) < abs(2 * (prefixSum - nums[i]) - sum))) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    // Output the subvectors
    cout << "2" << endl;
    if (cutIndex == 0) {
        cout << "1 1" << endl;
    } else if (cutIndex == n - 1) {
        cout << n << " 1" << endl;
    } else {
        cout << cutIndex + 1 << " " << n - cutIndex << endl;
    }

    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "1" << endl << "1" << endl;
    cout << nums[cutIndex] << endl;

    if (cutIndex != n - 1) {
        cout << "1" << endl << n - cutIndex << endl;
        for (int i = cutIndex + 1; i < n; i++) {
            cout << nums[i] << " ";
        }
    }
    
    return 0;
}