#include <iostream>
#include <climits>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    vector<int> nums;
    string line;
    
    getline(cin, line);
    istringstream iss(line);
    
    int num;
    while (iss >> num) {
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
        int suffixSum = sum - prefixSum; 
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
        if (i != cutIndex + 1) { 
            cout << ' '; 
        }
        cout << nums[i]; 
    } 
    cout << '\n';

    return 0;
}