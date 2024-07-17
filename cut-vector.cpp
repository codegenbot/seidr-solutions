#include <vector>
#include <iostream>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i <= v.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        for (int j = i; j < v.size(); j++) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> leftVec(v.begin(), v.begin() + cutIndex);
    vector<int> rightVec(v.begin() + cutIndex, v.end());
    
    return {leftVec, rightVec};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "0\n";
    for (const auto &x : res.first) {
        cout << x << " ";
    }
    cout << "\n0\n";
    for (const auto &x : res.second) {
        cout << x << " ";
    }
    return 0;
}