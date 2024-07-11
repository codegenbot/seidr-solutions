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
    
    int totalSum = 0;
    for (int num : vec) {
        totalSum += num;
    }
    
    int leftSum = 0;
    int rightSum = totalSum;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; ++i) {
        leftSum += vec[i];
        rightSum -= vec[i];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        cout << vec[i] << endl;
    }
    for (int i = cutIndex + 1; i < n; ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}