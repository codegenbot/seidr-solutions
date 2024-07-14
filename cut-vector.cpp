#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 1; i <= n / 2; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += v[j];
        }
        
        if (leftSum == rightSum) {
            res.first = vector<int>(v.begin(), v.begin() + i);
            res.second = vector<int>(v.begin() + i, v.end());
            return res;
        }
    }
    
    int leftSum = 0, minDiff = INT_MAX, midIndex;
    
    for (int i = 1; i < n; i++) {
        leftSum += v[i-1];
        
        if (leftSum == v[n-i] - leftSum) {
            res.first = vector<int>(v.begin(), v.begin() + i);
            res.second = vector<int>(v.begin() + i, v.end());
            return res;
        }
        
        int diff = abs(v[i] - v[n-i]);
        
        if (diff < minDiff) {
            minDiff = diff;
            midIndex = i;
        }
    }
    
    leftSum = 0;
    for (int i = 0; i < midIndex; i++) {
        leftSum += v[i];
    }
    
    res.first = vector<int>(v.begin(), v.begin() + midIndex);
    res.second = vector<int>(v.begin() + midIndex, v.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
    }
    
    pair<vector<int>, vector<int>> res = cutVector(v);
    
    cout << "[";
    for (const auto &i : res.first) {
        cout << i << " ";
    }
    cout << "]" << endl;
    cout << "[";
    for (const auto &i : res.second) {
        cout << i << " ";
    }
    cout << "]" << endl;
    
    return 0;
}