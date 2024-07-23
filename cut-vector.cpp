```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    for (int i = 1; i <= n - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += v[j];
        }
        
        if (leftSum == rightSum) {
            res.push_back(vector<int>(v.begin(), v.begin() + i));
            res.push_back(vector<int>(v.begin() + i, v.end()));
            return res;
        }
    }
    
    int minDiff = INT_MAX, cutIndex = -1;
    
    for (int i = 1; i <= n - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    res.push_back(vector<int>(v.begin(), v.begin() + cutIndex));
    res.push_back(vector<int>(v.begin() + cutIndex, v.end()));
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for (auto& vec : res) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}