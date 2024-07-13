```cpp
#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for(int i = 0; i < v.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j = 0; j <= i; j++) {
            leftSum += v[j];
        }
        
        for(int j = i + 1; j < v.size(); j++) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if(diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> leftVec, rightVec;
    
    for(int i = 0; i <= cutIndex; i++) {
        leftVec.push_back(v[i]);
    }
    
    for(int i = cutIndex + 1; i < v.size(); i++) {
        rightVec.push_back(v[i]);
    }
    
    return {leftVec, rightVec};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "Left: ";
    for(auto x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right: ";
    for(auto x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}