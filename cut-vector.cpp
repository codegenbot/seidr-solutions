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
    
    int diff = INT_MAX;
    int cutIdx = -1;
    
    for (int i = 1; i < n; ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; ++j) {
            leftSum += vec[j];
        }
        for (int j = i; j < n; ++j) {
            rightSum += vec[j];
        }
        
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIdx = i;
        }
    }
    
    for (int i = 0; i < cutIdx; ++i) {
        cout << vec[i] << endl;
    }
    cout << 0 << endl;
    for (int i = cutIdx; i < n; ++i) {
        cout << vec[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}