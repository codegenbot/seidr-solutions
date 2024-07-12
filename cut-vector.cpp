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
        int suffixSum = sum - prefixSum;
        int diff = abs(prefixSum - suffixSum);
        
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    if (cutIndex == 0) {
        cout << "1" << endl << "1" << endl << nums[0] << endl << "1" << endl;
        for (int i = 1; i < n; i++) {
            cout << nums[i];
            if (i != n-1) {
                cout << " ";
            }
        }
    } else {
        cout << "2" << endl << cutIndex+1 << " " << n - 1 - cutIndex << endl;
        
        for (int i = 0; i <= cutIndex; i++) {
            cout << nums[i];
            if (i != cutIndex) {
                cout << " ";
            }
        }
        cout << endl;
        
        cout << "1" << endl;
        
        for (int i = cutIndex + 1; i < n; i++) {
            cout << nums[i];
            if (i != n-1) {
                cout << " ";
            }
        }
    }
    
    return 0;
}