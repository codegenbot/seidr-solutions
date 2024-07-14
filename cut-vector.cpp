#include <vector>
#include <iostream>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i <= vec.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += vec[j];
        }
        
        for (int j = i; j < vec.size(); j++) {
            rightSum += vec[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> leftVec(vec.begin(), vec.begin() + cutIndex);
    vector<int> rightVec(vec.begin() + cutIndex, vec.end());
    
    return {leftVec, rightVec};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec) cin >> x;
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    
    cout << "Left Vector: ";
    for (const auto &x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    
    cout << "Right Vector: ";
    for (const auto &x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}