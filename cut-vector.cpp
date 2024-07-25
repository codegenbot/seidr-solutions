#include <iostream>
#include <climits>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;
    
    cin.ignore();
    
    int num;
    while (cin >> num) {
        nums.push_back(num);
        char comma;
        if(!(cin >> comma) || comma == '\n') {
            break;
        }
    }
    
    int n = nums.size();
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int prefixSum = 0;
    int minDiff = INT_MAX/2; 
    int cutIndex = 0;
    
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
        cout << nums[i] << ' '; 
    } 
    cout << '\n'; 

    return 0;
}