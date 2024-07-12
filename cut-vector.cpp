#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    
    int leftSum = 0;
    int rightSum = sum;
    int diff = INT_MAX;
    int cutIdx = -1;
    
    for (int i = 0; i < n; ++i) {
        leftSum += vec[i];
        rightSum -= vec[i];
        
        int currentDiff = abs(leftSum - rightSum);
        
        if (currentDiff <= diff) {
            diff = currentDiff;
            cutIdx = i;
        }
    }
    
    for (int i = 0; i <= cutIdx; ++i) {
        cout << vec[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = cutIdx + 1; i < n; ++i) {
        cout << vec[i] << endl; 
    }
    
    cout << 0 << endl;
    
    return 0;
}